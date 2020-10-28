using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.UIElements;
public enum Color { Blue, Red, Yellow }

public class Player : MonoBehaviour
{
    /// <summary>
    /// todo
    /// trigger end menu in uihandler
    /// </summary>
    //info vars
    public Color color;
    public int combo ;
    public float timer;

    //input
    private float ScreenWidth;
    public float speed = 1;

    //ui
    public TMP_Text comboUI;
    private ColorSwap swapper;
    private UIHandler UI;
    //12.26
    private GameHandler info { get { return GameHandler.Instance; } }
    // Start is called before the first frame update
    private void Awake()
    {
        comboUI.text = "0";
        info.slowed = false;
        info.topSpeed = 15;
        info.score = 0;
        info.slowSpeed = 7;
        info.speedbar = 100f;
        info.alive = true;
        swapper = GetComponent<ColorSwap>();
        UI = GameObject.FindGameObjectWithTag("Finish").GetComponent<UIHandler>();
        combo = 0;
        timer = 0;
        color = GetRandomEnum<Color>();
        UpdateColor(color);

        ScreenWidth = Screen.width;
    }

    private void Start()
    {
    }

    /// <summary>
    /// update the Combo UI text to equal combo var
    /// </summary>
    private void UpdateComboUI() {
        if (combo > 0)
            comboUI.text = combo.ToString();
        else
            comboUI.text = "";

    }

    /// <summary>
    /// get random enumb value for given enum
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns>random enum value from given enum</returns>
    private T GetRandomEnum<T>()
    {
        System.Array A = System.Enum.GetValues(typeof(T));
        T V = (T)A.GetValue(UnityEngine.Random.Range(0, A.Length));
        return V;
    }

    // Update is called once per frame
    void Update()
    {
        //bounce
        float y = Mathf.PingPong(1 * Time.time, 1);
        Vector3 pos = new Vector3(transform.position.x, y, transform.position.z);
        transform.position = pos;

        //loop over every touch found
#if UNITY_IOS	|| UNITY_ANDROID	
        if (Input.touchCount == 1)
        {
            if (Input.GetTouch(0).position.x > ScreenWidth / 2)
            {
                if (transform.position.x < 12.26f)
                {

                    transform.position += Vector3.right * Time.deltaTime * speed;

                    StartCoroutine(Right());
                }

                //move right
            }
            if (Input.GetTouch(0).position.x < ScreenWidth / 2)
            {
                if (transform.position.x > -12.26)
                {

                    transform.position += Vector3.left * Time.deltaTime * speed;
                    StartCoroutine(Left());
                }

                //move left
            }
        }
        else if (Input.touchCount==2) 
        {
            if ((Input.GetTouch(0).position.x > ScreenWidth / 2 && Input.GetTouch(1).position.x < ScreenWidth / 2) || (Input.GetTouch(1).position.x > ScreenWidth / 2 && Input.GetTouch(0).position.x < ScreenWidth / 2))
                if (Input.GetTouch(0).phase == TouchPhase.Began && Input.GetTouch(1).phase == TouchPhase.Began)
                {
                    if (info.speedbar > 0)
                    {
                        info.slowed = !info.slowed;
                    }
                }
            
        }
        else
        {
            StartCoroutine(Center());
        }
#endif
#if UNITY_EDITOR || UNITY_STANDALONE
        //slow down
        if (Input.GetKeyDown(KeyCode.Space)) {
            if (info.speedbar > 0)
            {
                info.slowed = !info.slowed;
            }
        
        }


        //movement
        if (Input.GetMouseButton(0))
        {
            
            if (Input.mousePosition.x > ScreenWidth / 2)
            {

                if (transform.position.x < 12.26f)
                {
                    
                    transform.position += Vector3.right * Time.deltaTime * speed;

                    StartCoroutine(Right());

                }

                //move right
            }
            if (Input.mousePosition.x < ScreenWidth / 2)
            {

                if (transform.position.x > -12.26)
                {

                    transform.position += Vector3.left * Time.deltaTime * speed;
                    StartCoroutine(Left());

                }

                //move left
            }
            
        }
        //if no click
        else { 
            StartCoroutine(Center());
        }


#endif
        //timer runs out and timer counting down
        if (info.speedbar <= 0)
        {
            if (info.slowed)
                info.slowed = false;
        }
        else
        {
            if (info.slowed)
                info.speedbar -= .8f;
        }
    }

    /// <summary>
    /// update the score and score UI after a combo is succesfully completed
    /// </summary>
    private void AddCombo() 
    {
        info.score += combo;
        StartCoroutine(info.IncrementTime(combo));
        combo = 0;
        UpdateComboUI();
    }

    private void Die() {
        info.alive = false;
        UI.EndUi();
        Destroy(gameObject);
    }


    private IEnumerator Center()
    {
            Quaternion target = Quaternion.Euler(0, 0, 0);
            transform.rotation = Quaternion.Slerp(transform.rotation, target, Time.deltaTime * 5);
            yield return null;
    }

    private IEnumerator Right()
    {
            Quaternion target = Quaternion.Euler(0, 0, -15);
            transform.rotation = Quaternion.Slerp(transform.rotation, target, Time.deltaTime * 5);
            yield return null;
    }

    private IEnumerator Left() 
    {
            Quaternion target = Quaternion.Euler(0, 0, 15);
            transform.rotation = Quaternion.Slerp(transform.rotation, target, Time.deltaTime * 5);
            yield return null;
    }

    private IEnumerator Boost() {
        int tempTop=info.topSpeed;
        int tempSlow=info.slowSpeed;
        info.topSpeed += tempTop + 10;
        info.slowSpeed += tempSlow+3;
        yield return new WaitForSeconds(.25f);
        info.topSpeed = tempTop + 2;
        info.slowSpeed = tempSlow;
        yield return null;
    }

    /// <summary>
    /// handles player colliding with colored block or gate
    /// </summary>
    /// <param name="collision"></param>
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.tag != "Gate") {
            if (collision.transform.tag == color.ToString())
            {
                combo++;
                UpdateComboUI();
            }
            else 
            {
                Die();
            }
            Destroy(collision.gameObject);
        }
        else {
                AddCombo();
                collision.gameObject.GetComponent<Gate>().Correct();
                StartCoroutine(Boost());
                combo = 0;
                color = GetRandomEnum<Color>();
                UpdateColor(color);
        }
    }

    /// <summary>
    /// update color of model to match enum of
    /// </summary>
    /// <param name="c">color to change to</param>
    private void UpdateColor(Color c) {
        info.color = c;
        if (c == Color.Yellow) { swapper.ChangeColor(0); }
        else if (c == Color.Red) { swapper.ChangeColor(1); }
        else  { swapper.ChangeColor(2); }
    }

}
