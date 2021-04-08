using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Block : MonoBehaviour
{
    Rigidbody rb;
    
    protected GameHandler info { get { return GameHandler.Instance; } }
    // Start is called before the first frame update
    void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        if (info.alive)
        {
            if (!info.slowed)
            {
                rb.velocity = transform.forward * info.topSpeed;
            }
            else
            {
                rb.velocity = transform.forward * info.slowSpeed;

            }
            if (transform.position.z <= 0)
                gameObject.SetActive(false);
        }
    }
}
