using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollText : MonoBehaviour
{
    Renderer render;
    float slowDown=.05f;
    float offsetY;
    private GameHandler info { get { return GameHandler.Instance; } }
    bool stopped;

    private void Start()
    {
        stopped = false;
        render = GetComponent<Renderer>();
    }
    //scrollls texture on y axis
    void Update()
    {

        if (info.alive)
        {
             offsetY= Time.time * (-info.topSpeed * .05f);
            render.material.mainTextureOffset = new Vector2(0, offsetY);
        }
        else {
            if (!stopped)
            {
                slowDown -= .00005f;
                offsetY = Time.time * (-info.topSpeed * slowDown);

                if (offsetY > -5.5)
                {
                    render.material.mainTextureOffset = new Vector2(0, offsetY);
                }
                else { stopped = true; }
            }

        }
    }
}
