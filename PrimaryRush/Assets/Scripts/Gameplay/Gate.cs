using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Gate : Block
{
    private int number;

 
    // Start is called before the first frame update


    /// <summary>
    /// sets up the gates number sprite and the public number variable based on current score
    /// </summary>

    public void Correct() {
        gameObject.SetActive(false);
    }
}
