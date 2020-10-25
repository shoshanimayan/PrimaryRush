using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//todo
//generate at 5 spots
//create generation algorithm
public class Generator : MonoBehaviour
{
    public GameObject[] spawnSpot;
    private GameObject red;
    private GameObject blue;
    private GameObject yellow;
    private GameObject[] blocks;
    private GameObject gate;

    private GameHandler info { get { return GameHandler.instance; } }

    //time based multiplier to determine spawn rate
    private float timeMultiplier = 0;
    private float gateTimer = 0;

    /// <summary>
    /// spawns amount of gates in different lanes, at minimum one open lane
    /// spawn formula, get some fraction of one, whichever x/5 it is closest to is where it spawns, if already spawned there at this spawning, pick open spot on side of it
    ///track how many of each color since last gate and choose random color range or players current color range
    /// </summary>
    /// <param name="amount"># 1-4</param>
    /// <param name="taken">spawn spaces already taken</param>

    private List<int> SpawnGate(int amount, List<int> taken)
    {
        while (amount > 0)
        {
            int x = Random.Range(0, 5);
            if (!taken.Contains(x))
            {
                taken.Add(x);
                Instantiate(gate, spawnSpot[x].transform.position, spawnSpot[x].transform.rotation);
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
    /// <param name="amount"> # 1-4</param>
    private void SpawnBlocks(int amount)
    {
        List<int> taken = new List<int>();
        if (amount == 5)
        {
            amount--;
            int x = 0;
            switch (info.color) {
                case Color.Red:
                    x = 0;
                    break;
                case Color.Yellow:
                    x = 1;
                    break;
                case Color.Blue:
                    x = 2;
                    break;
            }
            taken.Add(x);
            Instantiate(blocks[x], spawnSpot[x].transform.position, spawnSpot[x].transform.rotation);
            while (amount > 0)
            {
                x = Random.Range(0, 5);
                if (!taken.Contains(x))
                {
                    taken.Add(x);
                    Instantiate(blocks[Random.Range(0, 3)], spawnSpot[x].transform.position, spawnSpot[x].transform.rotation);
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
                    Instantiate(blocks[Random.Range(0, 3)], spawnSpot[x].transform.position, spawnSpot[x].transform.rotation);
                    amount--;
                }
            }
        }

        if (info.score < 5)
        {
            timeMultiplier = 3;
        }
        if (info.score < 10)
        {
            timeMultiplier = 2;
        }
        else if ((info.score >= 10) && (info.score <= 45))
        {
            timeMultiplier = 1.5f;
        }
        else
        {
            timeMultiplier = .5f;
        }


    }


    // Start is called before the first frame update
    void Awake()
    {
        red = Resources.Load<GameObject>("prefabs/RedCube");
        blue = Resources.Load<GameObject>("prefabs/BlueCube");
        yellow = Resources.Load<GameObject>("prefabs/YellowCube");
        gate = Resources.Load<GameObject>("prefabs/Gate");

        gateTimer = 5f;
        blocks = new GameObject[] { red,yellow,blue};

    }

    private void Start()
    {
        SpawnBlocks(Random.Range(1, 5));
    }

    // Update is called once per frame
    void Update()
    {
        if (timeMultiplier <= 0)
        {
            if(info.score<=10)
                SpawnBlocks(Random.Range(1, 6));
            else if(info.score>10 &&info.score<=20)
                SpawnBlocks(Random.Range(2, 6));
            else if (info.score >20  && info.score <= 30)
                SpawnBlocks(Random.Range(3, 6));
            else
                SpawnBlocks(Random.Range(1, 6));

        }
        timeMultiplier -= (Time.deltaTime);
        gateTimer -= (Time.deltaTime);






        //every z blocks spawn gates
        //randomize what z is but increase range as score grows
        //when total amount ==z
        //set new z in spawn gate


    }
}
