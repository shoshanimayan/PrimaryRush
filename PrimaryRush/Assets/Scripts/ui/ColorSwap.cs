using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorSwap : MonoBehaviour
{
    public GameObject[] objects;
    public Material[] materials;
//change material on all itesm in object list
    public void ChangeColor(int index) 
    {
        foreach (GameObject x in objects) {
            x.GetComponent<Renderer>().material = materials[index];

        }
    }
}
