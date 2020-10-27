using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundChange : MonoBehaviour
{
    public UnityEngine.Color color1 = UnityEngine.Color.red;
    public UnityEngine.Color color2 = UnityEngine.Color.blue;
    public UnityEngine.Color color3 = UnityEngine.Color.yellow;
    public Camera cam;

    public float duration = 3.0F;
    void Start()
    {
        cam = GetComponent<Camera>();
        cam.clearFlags = CameraClearFlags.SolidColor;
    }

    // Update is called once per frame
    void Update()
    {
        float t = Mathf.PingPong(Time.time, duration) / duration;
        cam.backgroundColor = UnityEngine.Color.Lerp(color2,color1 , t);

    }
}
