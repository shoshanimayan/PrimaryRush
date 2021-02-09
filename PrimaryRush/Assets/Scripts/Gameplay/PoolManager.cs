using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.Rendering;

public class PoolManager : MonoBehaviour
{
    private GameObject redPref;
    private GameObject gatePref;


    public Material redM;
    public Material blueM;
    public Material yellowM;

    public bool ready;
    public Queue<GameObject> blockPool;
    public Queue<GameObject> gatePool;


    public int maxBlock;
    public int maxGate;

    /// <summary>
    /// set up block and gate pools
    /// </summary>
    private void Awake()
    {
        ready = false;
        redPref = Resources.Load<GameObject>("prefabs/RedCube");
        gatePref = Resources.Load<GameObject>("prefabs/Gate");

        blockPool = new Queue<GameObject>();
        gatePool = new Queue<GameObject>();

        GameObject gate;
        GameObject red;
       
        for (int i = 0; i <= maxBlock; i++) {
            red =Instantiate(redPref,Vector3.zero, Quaternion.identity);
            blockPool.Enqueue(red);
            red.SetActive(false);

        }
        for (int i = 0; i <= maxGate; i++)
        {
            gate = Instantiate(gatePref, Vector3.zero, Quaternion.identity);
            gatePool.Enqueue(gate);
            gate.SetActive(false);

        }
        ready = true;

    }

    /// <summary>
    /// activate gate
    /// </summary>
    /// <param name="position">where to place gate</param>
    public void ActivateGate( Transform position) {
        if (!gatePool.Peek().activeInHierarchy) {
            GameObject obj = gatePool.Dequeue();
            obj.transform.position = position.position;
            obj.transform.rotation = position.rotation;
            obj.SetActive(true);
            gatePool.Enqueue(obj);

        }
    }

    /// <summary>
    /// activate block
    /// </summary>
    /// <param name="color">color and tag to give block</param>
    /// <param name="position">where to place block</param>
    public void ActivateBlock(string color, Transform position)
    {
        if (!blockPool.Peek().activeInHierarchy)
        {
            GameObject obj = blockPool.Dequeue();
            switch (color)
            {
                case "Red":
                    obj.GetComponent<MeshRenderer>().material = redM;
                    obj.tag = color;
                    obj.transform.position = position.position;
                    obj.transform.rotation = position.rotation;
                    obj.SetActive(true);
                    break;
                case "Blue":
                    obj.GetComponent<MeshRenderer>().material = blueM;
                    obj.tag = color;
                    obj.transform.position = position.position;
                    obj.transform.rotation = position.rotation;
                    obj.SetActive(true);

                    break;
                case "Yellow":
                    obj.GetComponent<MeshRenderer>().material = yellowM;
                    obj.tag = color;
                    obj.transform.position = position.position;
                    obj.transform.rotation = position.rotation;
                    obj.SetActive(true);
                    break;
                default:
                    break;
            }
            blockPool.Enqueue(obj);

        }
    }


}
