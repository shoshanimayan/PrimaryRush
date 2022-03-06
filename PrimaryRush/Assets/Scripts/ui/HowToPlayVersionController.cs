using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HowToPlayVersionController : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI text;
    void Start()
    {
#if UNITY_STANDALONE_WIN || UNITY_EDITOR
        text.text = " Move by clicking left or right on the screen\n\n" + "slow down time by tapping space, tap again to speed up or let the bar run out\n\n" + "hit cubes in your color to rack up a combo, and then hit a white gate to turn that combo into points, and refill your speed bar\n";
#endif
    }


}
