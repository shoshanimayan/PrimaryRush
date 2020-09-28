using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Player : MonoBehaviour
{
    /// <summary>
    /// todo
    /// slow down
    /// Update color function
    /// trigger end menu in uihandler
    /// </summary>
    //info vars
    public enum Color {Blue,Red,Yellow }
    public Color color;
    public int combo ;
    public float timer;

    //input
    private float ScreenWidth;
    public float speed = 1;

    //ui
    public TMP_Text comboUI;
    private ColorSwap swapper;
    //12.26
    private GameHandler info { get { return GameHandler.instance; } }

    // Start is called before the first frame update
    private void Awake()
    {
        comboUI.text = "0";
        info.slowed = false;
        info.topSpeed = 10;
        info.score = 0;
        info.slowSpeed = 1;
        info.speedbar = 100f;
        swapper = GetComponent<ColorSwap>();

        combo = 0;
        timer = 0;
        color = GetRandomEnum<Color>();
        UpdateColor(color);

        ScreenWidth = Screen.width;
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
    private Color GetColor(string x) {
        if (x == "Blue")
            return Color.Blue;
        else if (x == "Red")
            return Color.Red;
        else
            return Color.Yellow;



    }

    // Update is called once per frame
    void Update()
    {
        //loop over every touch found
#if UNITY_IOS	|| UNITY_ANDROID	
        if (Input.touchCount == 1)
        {
            if (Input.GetTouch(0).position.x > ScreenWidth / 2)
            {
                if (transform.position.x < 12.26f)
                {
                    
                    transform.position += Vector3.right * Time.deltaTime * speed;

                }
                //move right
            }
            if (Input.GetTouch(0).position.x < ScreenWidth / 2)
            {
                if (transform.position.x > -12.26)
                {

                    transform.position += Vector3.left * Time.deltaTime * speed;

                }
                //move left
            }
        }
#endif
#if UNITY_EDITOR || UNITY_STANDALONE
        if (Input.GetMouseButton(0))
        {
            
            if (Input.mousePosition.x > ScreenWidth / 2)
            {

                if (transform.position.x < 12.26f)
                {
                    
                    transform.position += Vector3.right * Time.deltaTime * speed;

                }
                //move right
            }
            if (Input.mousePosition.x < ScreenWidth / 2)
            {

                if (transform.position.x > -12.26)
                {

                    transform.position += Vector3.left * Time.deltaTime * speed;

                }
                //move left
            }
        }
#endif

    }

    /// <summary>
    /// update the score and score UI after a combo is succesfully completed
    /// </summary>
    private void AddCombo() 
    {
        info.score += combo;
        combo = 0;
        UpdateComboUI();

    }

    private void Die() {
        info.topSpeed = 0;
        info.slowSpeed = 0;
        Destroy(gameObject);
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

            }
            else 
            {
                combo = 1;
                color = GetColor(collision.transform.tag);
                UpdateColor(color);
            }
            Destroy(collision.gameObject);
            UpdateComboUI();
        }
        else {
            Gate gate = collision.gameObject.GetComponent<Gate>();
            if (combo == gate.GetNumber())
            {
                AddCombo();
                gate.Correct();
                StartCoroutine(Boost());
            }
            else {
                Die();            
            }
        }

    }
    /// <summary>
    /// update color of model to match enum of
    /// </summary>
    /// <param name="c">color to change to</param>
    private void UpdateColor(Color c) {
        if (c == Color.Yellow) { swapper.ChangeColor(0); }
        else if (c == Color.Red) { swapper.ChangeColor(1); }
        else  { swapper.ChangeColor(2); }
    }

}
