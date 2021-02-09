using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class PoolManager : MonoBehaviour
{
    private GameObject redPref;
    private GameObject bluePref;
    private GameObject yellowPref;
    private GameObject gatePref;


    public List<GameObject> redPool;
    public List<GameObject> yellowPool;
    public List<GameObject> bluePool;
    public List<GameObject> gatePool;


    public int max;

    private void Awake()
    {
        redPref = Resources.Load<GameObject>("prefabs/RedCube");
        bluePref = Resources.Load<GameObject>("prefabs/BlueCube");
        yellowPref = Resources.Load<GameObject>("prefabs/YellowCube");
        gatePref = Resources.Load<GameObject>("prefabs/Gate");

        GameObject gate;
        GameObject red;
        GameObject blue;
        GameObject yellow;

        for (int i = 0; i <= max; i++) {
            red =Instantiate(redPref,Vector3.zero, Quaternion.identity);
            red.SetActive(false);
            redPool.Add(red);

            blue = Instantiate(bluePref, Vector3.zero, Quaternion.identity);
            blue.SetActive(false);
            bluePool.Add(red);

            yellow= Instantiate(yellowPref, Vector3.zero, Quaternion.identity);
            yellow.SetActive(false);
            yellowPool.Add(yellow);

            gate = Instantiate(gatePref, Vector3.zero, Quaternion.identity);
            gate.SetActive(false);
            gatePool.Add(red);

        }

    }

    public void Deactivate(GameObject obj) {
        obj.SetActive(false);
    
    }

    public void Activate(GameObject obj,Transform position) {
        obj.transform.position = position.position;
        obj.SetActive(true);
    
    }

}
