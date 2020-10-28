using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollText : MonoBehaviour
{
    Renderer render;
    private GameHandler info { get { return GameHandler.Instance; } }


    private void Start()
    {
        render = GetComponent<Renderer>();
    }
    //scrollls texture on y axis
    void Update()
    {
        float offsetY = Time.time *( -info.topSpeed*.05f);
        render.material.mainTextureOffset = new Vector2(0, offsetY);
    }
}
