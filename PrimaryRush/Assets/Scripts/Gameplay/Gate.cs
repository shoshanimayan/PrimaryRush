using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Gate : Block
{
    private Sprite[] textures;
    public Image img;
    private int number;

 
    // Start is called before the first frame update
    void Start()
    {
        textures = Resources.LoadAll<Sprite>("Textures");
        Array.Sort(textures, delegate (Sprite x, Sprite y) { return int.Parse(x.name).CompareTo(int.Parse(y.name)); });
        foreach (Sprite x in textures)
            Debug.Log(x.name);
        int temp;
        if (info.score < textures.Length)
            temp = 6;
        else
            temp = textures.Length;
       number = UnityEngine.Random.Range(0,temp);
       img.sprite = textures[number];
       number += 5;
    }

    public int GetNumber() { return number; }
    public void Correct() {
        Destroy(this);
    }
}
