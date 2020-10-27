using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorSwap : MonoBehaviour
{
    public GameObject[] objects;
    public Material[] materials;
    public UnityEngine.Color color1;
    public UnityEngine.Color color2;
    public float duration = 6.0F;
    public UnityEngine.Color c1;
    public UnityEngine.Color c2;
    public UnityEngine.Color c3;

    private void Awake()
    {
        color2= UnityEngine.Color.black;

    }

    //change material on all itesm in object list
    public void ChangeColor(int index) 
    {
        foreach (GameObject x in objects) {
            x.GetComponent<Renderer>().material = materials[index];
        }
        switch (index) {
            case (0):
                color1 = c1;
                break;
            case (1):
                color1 = c2;
                break;
            case (2):
                color1 = c3;
                break;
        }
    }

    private void Update()
    {
        if (Camera.main.backgroundColor == color1)
        {
            color2 = color1;

        }
        float t = Mathf.PingPong(Time.time, duration) / duration;

            Camera.main.backgroundColor = UnityEngine.Color.Lerp(color2, color1, t);
        
        

    }
}
