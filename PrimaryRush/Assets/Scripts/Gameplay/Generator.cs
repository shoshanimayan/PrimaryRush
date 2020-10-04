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
    private GameObject gateRed;
    private GameObject gateBlue;
    private GameObject gateYellow;
    private GameObject[] gates;


    private GameHandler info { get { return GameHandler.instance; } }


    //how many spawned since last gate spawn
    private int redCount = 0;
    private int blueCount = 0;
    private int yellowCount = 0;
    //total count is all together

    //time based multiplier to determine spawn rate
    private float timeMultiplier = 0;
    private float gateSpawn = 0;

    /// <summary>
    /// spawns amount of gates in different lanes, at minimum one open lane
    /// spawn formula, get some fraction of one, whichever x/5 it is closest to is where it spawns, if already spawned there at this spawning, pick open spot on side of it
    ///track how many of each color since last gate and choose random color range or players current color range
    /// </summary>
    /// <param name="amount"># 1-4</param>
    private void SpawmGates(int amount)
    {
        List<GameObject> taken = new List<GameObject>();
        if (yellowCount >= 5 | blueCount >= 5 || redCount >= 5)
        {


        }


    }

 

  

    /// <summary>
    /// spawn amount of gates, could be all dif or same color, but different lanes, at minimum one open lane
    /// spawn formula, get some fraction of one, whichever x/5 it is closest to is where it spawns, if already spawned there at this spawning, pick open spot on side of it
    /// track colors spawned
    /// </summary>
    /// <param name="amount"> # 1-4</param>
    private void SpawnBlocks(int amount)
    {
        List<float> taken = new List<float>();
        float[] spaces = new float[] { 0, 1, 2, 3, 4 };

    

        while(amount>0)
        {
            int x = Random.Range(0, 5);
            if (!taken.Contains(x))
            {
                taken.Add(x);
                Instantiate(blocks[Random.Range(0, 3)], spawnSpot[x].transform.position, spawnSpot[x].transform.rotation);
                amount--;
            }
          

        }

        if (info.score < 20)
        {
            timeMultiplier = 3;
        }
        else if ((info.score >= 20) && (info.score <= 20))
        {
            timeMultiplier = 2;
        }
        else
        {
            timeMultiplier = 1;
        }


    }


    // Start is called before the first frame update
    void Awake()
    {
        red = Resources.Load<GameObject>("prefabs/RedCube");
        blue = Resources.Load<GameObject>("prefabs/BlueCube");
        yellow = Resources.Load<GameObject>("prefabs/YellowCube");
        gate = Resources.Load<GameObject>("prefabs/Gate");
        gateRed = Resources.Load<GameObject>("prefabs/GateRed");
        gateYellow = Resources.Load<GameObject>("prefabs/GateYellow");
        gateBlue = Resources.Load<GameObject>("prefabs/GateBlue");
        gateSpawn = 5;
        gates = new GameObject[] { gateYellow, gate, gateBlue, gateRed };
        blocks = new GameObject[] { red,yellow,blue};

    }

    private void Start()
    {
        SpawnBlocks(Random.Range(1, 5));
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(timeMultiplier);
        if (timeMultiplier <= 0)
        {
            SpawnBlocks(Random.Range(1, 5));

        }
        timeMultiplier -= (Time.deltaTime);

        if (gateSpawn == yellowCount + blueCount + redCount)
        {
            SpawmGates(Random.Range(1, 5));


        }
        //current score effects spawn timer, higher score, higher spawn rate, or just let the score effect speed and have consistent spawn rate, experiment



        //every z blocks spawn gates
        //randomize what z is but increase range as score grows
        //when total amount ==z
        //set new z in spawn gate


    }
}
