﻿using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


public class GameHandler : ScriptableSingleton<GameHandler>
{
    //stores top speed , slow speed  , speedbar, score counter
    public int score;
    public int topSpeed;
    public int slowSpeed;
    public float speedbar;
    public bool slowed;

    private void Awake()
    {
        slowed = false;
        topSpeed = 10;
        score = 0;
        slowSpeed = 1;
        speedbar = 100f;
    }
}