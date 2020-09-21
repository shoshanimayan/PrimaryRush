using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    /// <summary>
    /// todo
    /// player input
    /// speed change
    /// hookup to ui
    /// Update color function
    /// 
    /// </summary>
    public enum Color {Blue,Red,Yellow }
    public Color color;
    public int combo ;
    public float timer;
    private Canvas end;
    private GameHandler info { get { return GameHandler.instance; } }

    // Start is called before the first frame update
    private void Awake()
    {
        info.slowed = false;
        info.topSpeed = 10;
        info.score = 0;
        info.slowSpeed = 1;
        info.speedbar = 100f;
    }
    void Start()
    {
        combo = 0;
        timer = 0;
        color = GetRandomEnum<Color>();
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
        
    }

    private void AddCombo() 
    {
        info.score += combo;
        combo = 0;

    }

    private void Die() {
        info.topSpeed = 0;
        info.slowSpeed = 0;
        Destroy(gameObject);
    }


    private IEnumerator Boost() {
        int tempTop=info.topSpeed;
        int tempSlow=info.slowSpeed;
        info.topSpeed += tempTop + 20;
        info.slowSpeed += tempSlow+3;
        yield return new WaitForSeconds(.5f);
        info.topSpeed = tempTop + 5;
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
                combo = 0;
                color = GetColor(collision.transform.tag);
            }
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
    
    
    }

}
