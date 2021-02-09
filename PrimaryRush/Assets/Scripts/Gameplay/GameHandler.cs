using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


public class GameHandler : Singleton<GameHandler>
{

//add thruster particles

    public int score;
    public float topSpeed;
    public float slowSpeed;
    public float speedbar;
    public bool slowed;
    public bool alive;
    public ColorType color;

    private void Awake()
    {
        alive = true;
        slowed = false;
        topSpeed = 15;
        score = 0;
        slowSpeed = 7;
        speedbar = 100f;
    }
    private void Start()
    {
        alive = true;
        slowed = false;
        topSpeed = 15;
        score = 0;
        slowSpeed = 7;
        speedbar = 100f;
    }

    public IEnumerator IncrementTime(float x) {
        float speed = speedbar;
        if (speed < 100)
        {
            float time = x * 5;
            if (speed + time <= 100)
                speed += time;
            else
                speed = 100;
        }
        while (speedbar < speed) {
            speedbar++;
            yield return null;

        }
    }
}
