using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

//todo
//score ui
//slow meter ui
//end menu ui
public class UIHandler : MonoBehaviour
{
    public TMP_Text score;
    public Slider timeSlider;
    private GameHandler info { get { return GameHandler.instance; } }

    private void Update() {

        score.text = "Score: "+info.score.ToString();
        timeSlider.value = info.speedbar/100;
    
    }
}
