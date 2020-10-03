using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;
//todo
//generate at 5 spots
//create generation algorithm
public class Generator : MonoBehaviour
{
    public GameObject[] spawnSpot;
    private GameObject red;
    private GameObject blue;
    private GameObject yellow;
    private GameObject gate;
    private GameObject gateRed;
    private GameObject gateBlue;
    private GameObject gateYellow;



    //how many spawned since last gate spawn
    private int redCount = 0;
    private int blueCount = 0;
    private int yellowCount = 0;
 //total count is all together

    //time based multiplier to determine spawn rate
    private float timeMultiplier = 0;

    /// <summary>
    /// spawns amount of gates in different lanes, at minimum one open lane
    /// spawn formula, get some fraction of one, whichever x/5 it is closest to is where it spawns, if already spawned there at this spawning, pick open spot on side of it
    ///track how many of each color since last gate and choose random color range or players current color range
    /// </summary>
    /// <param name="amount"># 0-3</param>
    private void SpawmGates(int amount) { 
    
    }

    /// <summary>
    /// spawn amount of gates, could be all dif or same color, but different lanes, at minimum one open lane
    /// spawn formula, get some fraction of one, whichever x/5 it is closest to is where it spawns, if already spawned there at this spawning, pick open spot on side of it
    /// track colors spawned
    /// </summary>
    /// <param name="amount"> # 0-3</param>
    private void SpawnBlocks(int amount) { }
    // Start is called before the first frame update
    void Awake()
    {
        red = Resources.Load<GameObject>("prefabs/RedCube") ;
        blue = Resources.Load<GameObject>("prefabs/BlueCube") ;
        yellow = Resources.Load<GameObject>("prefabs/YellowCube") ;
        gate = Resources.Load<GameObject>("prefabs/Gate") ;
        gateRed = Resources.Load<GameObject>("prefabs/GateRed");
        gateYellow = Resources.Load<GameObject>("prefabs/GateYellow");
        gateBlue = Resources.Load<GameObject>("prefabs/GateBlue");

    }

    // Update is called once per frame
    void Update()
    {
        //current score effects spawn timer, higher score, higher spawn rate, or just let the score effect speed and have consistent spawn rate, experiment

        //three speeds based on score 
        //timer == spawntime*multiplier
        //slow 1-20
        //medium 20-100
        //fast

        //every z blocks spawn gates
        //randomize what z is but increase range as score grows
        //when total amount ==z
        //set new z in spawn gate


    }
}
