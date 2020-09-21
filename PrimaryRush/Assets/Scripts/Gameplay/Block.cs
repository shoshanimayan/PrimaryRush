using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Block : MonoBehaviour
{
    public float speed;
    Rigidbody rigidbody;
    
    protected GameHandler info { get { return GameHandler.instance; } }
    // Start is called before the first frame update
    void Awake()
    {
        rigidbody = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (!info.slowed)
        {
            rigidbody.velocity = transform.forward * info.topSpeed;
        }
      //  transform.position = new Vector3(transform.position.x, 0.6f, transform.position.z);

    }
}
