using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//todo
//generate at 5 spots
//create generation algorithm
public class Generator : MonoBehaviour
{
    public GameObject[] spawnSpot;
    private string[] blocks;
    private PoolManager pool;

    private GameHandler info { get { return GameHandler.Instance; } }

    //time based multiplier to determine spawn rate
    private float spawnTimer = 0;
    private float gateTimer = 0;

    /// <summary>
    /// spawns amount of gates in different lanes, at minimum one open lane
    /// spawn formula, get some fraction of one, whichever x/5 it is closest to is where it spawns, if already spawned there at this spawning, pick open spot on side of it
    ///track how many of each color since last gate and choose random color range or players current color range
    /// </summary>
    /// <param name="amount"># 1-4 objects to be spawned</param>
    /// <param name="taken">spawn spaces already taken</param>

    private List<int> SpawnGate(int amount, List<int> taken)
    {
        while (amount > 0)
        {
            int x = Random.Range(0, 5);
            if (!taken.Contains(x))
            {
                taken.Add(x);
                pool.ActivateGate(spawnSpot[x].transform);
                amount--;
            }
        }
        gateTimer = Random.Range(5f,15.1f);
        return taken;
    }

    /// <summary>
    /// spawn amount of gates, could be all dif or same color, but different lanes, at minimum one open lane
    /// spawn formula, get some fraction of one, whichever x/5 it is closest to is where it spawns, if already spawned there at this spawning, pick open spot on side of it
    /// track colors spawned
    /// </summary>
    /// <param name="amount"> spaces to spawn# 1-5</param>
    private void SpawnBlocks(int amount)
    {
        List<int> taken = new List<int>();
        if (amount == 5)
        {
            amount--;
           int x = Random.Range(0, 5);
            int mustHave=0;
            switch (info.color) {
                case ColorType.Red:
                    mustHave = 0;
                    break;
                case ColorType.Yellow:
                    mustHave= 1;
                    break;
                case ColorType.Blue:
                    mustHave = 2;
                    break;
            }
            taken.Add(x);
            pool.ActivateBlock(blocks[mustHave], spawnSpot[x].transform);
            while (amount > 0)
            {
                x = Random.Range(0, 5);
                if (!taken.Contains(x))
                {
                    taken.Add(x);
                    pool.ActivateBlock(blocks[Random.Range(0, 3)], spawnSpot[x].transform);
                    amount--;
                }
            }
        }
        else
        {
            if (gateTimer <= 0)
            {
                int x = 1;
                taken = SpawnGate(x, taken);
            }
            while (amount > 0)
            {
                int x = Random.Range(0, 5);
                if (!taken.Contains(x))
                {
                    taken.Add(x);
                    pool.ActivateBlock(blocks[Random.Range(0, 3)], spawnSpot[x].transform);
                    amount--;
                }
            }
        }

        if (info.score < 5)
        {
            spawnTimer = 3;
        }
        else if (info.score < 10)
        {
            spawnTimer = 2;
        }
        else if ((info.score >= 10) && (info.score <= 45))
        {
            spawnTimer = 1.5f;
        }
        else
        {
            spawnTimer = .5f;
        }


    }


    // Start is called before the first frame update
    void Awake()
    {

        pool = GetComponent<PoolManager>();
        gateTimer = 10f;
        blocks = new string[] { "Red","Yellow","Blue"};

    }

    private void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (info.alive &&pool.ready)
        {
            if (spawnTimer <= 0)
            {
                if (info.score <= 10)
                    SpawnBlocks(Random.Range(1, 6));
                else if (info.score > 10 && info.score <= 20)
                    SpawnBlocks(Random.Range(2, 6));
                else if (info.score > 20 && info.score <= 30)
                    SpawnBlocks(Random.Range(3, 6));
                else
                    SpawnBlocks(Random.Range(1, 6));

            }
            spawnTimer -= (Time.deltaTime);
            gateTimer -= (Time.deltaTime);


        }
    }
}
