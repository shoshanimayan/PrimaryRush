using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Gate : Block
{
    public Image img;
    private int number;
    public Color color;

 
    // Start is called before the first frame update
    void Start()
    {
        SetNumber();
    }

    /// <summary>
    /// sets up the gates number sprite and the public number variable based on current score
    /// </summary>
    private void SetNumber() {

        Sprite[] textures = Resources.LoadAll<Sprite>("Textures");
        Array.Sort(textures, delegate (Sprite x, Sprite y) { return int.Parse(x.name).CompareTo(int.Parse(y.name)); });
        int temp;
        if (info.score < textures.Length)
            temp = 6;
        else
            temp = textures.Length;
        number = UnityEngine.Random.Range(0, temp);
        img.sprite = textures[number];
        number += 5;
    }
    public int GetNumber() { return number; }
    public void Correct() {
        Destroy(gameObject);
    }
}
