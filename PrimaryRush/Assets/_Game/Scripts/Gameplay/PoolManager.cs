using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;


public class PoolManager : MonoBehaviour
{
    public AssetReferenceGameObject blockRef;
    public AssetReferenceGameObject GateRef;




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
        var _asyncOperationHandleBlock = blockRef.LoadAssetAsync<GameObject>();
        var _asyncOperationHandleGate = GateRef.LoadAssetAsync<GameObject>();
        bool hasSpawnedBlocks = _asyncOperationHandleBlock.IsValid();
        bool hasSpawnedGates = _asyncOperationHandleGate.IsValid();
        if (hasSpawnedBlocks)
        {
            _asyncOperationHandleBlock.Completed += handle =>
            {
                blockPool = new Queue<GameObject>();
                PoolObject(handle, ref blockPool, maxBlock);
                ready = true;

            };
        }
        else{
            throw new Exception("Invalid Block");
            ready = false;
        }
        if (hasSpawnedGates)
        {
            _asyncOperationHandleGate.Completed += handle2 =>
            {
                gatePool = new Queue<GameObject>();
                PoolObject(handle2, ref gatePool, maxGate);

            };
        }
        else
        {
            throw new Exception("Invalid Gate");
            ready = false;
        }


    }

    private  void PoolObject(AsyncOperationHandle<GameObject> loaded, ref Queue<GameObject> pool, int max) {
        GameObject pref = loaded.Result;
        pool = new Queue<GameObject>();
        GameObject temp;

        for (int i = 0; i < max; i++)
        {
            temp = Instantiate(pref, Vector3.zero, Quaternion.identity);
            pool.Enqueue(temp);
            temp.SetActive(false);

        }

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
