using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


public class GameHandler : ScriptableSingleton<GameHandler>
{

//add thruster particles
    public int score;
    public int topSpeed;
    public int slowSpeed;
    public float speedbar;
    public bool slowed;
    public Color color;

    private void Awake()
    {
        slowed = false;
        topSpeed = 15;
        score = 0;
        slowSpeed = 7;
        speedbar = 100f;
    }

    public void AddTime(float x) {
        if (speedbar < 100) {
            float time = x * 5;
            if (speedbar + time <= 100)
                speedbar += time;
            else
                speedbar = 100;
        }
        
    }
}
