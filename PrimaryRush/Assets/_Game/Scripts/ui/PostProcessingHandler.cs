using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using System.Threading.Tasks;
using System;


public class PostProcessingHandler : MonoBehaviour
{

    [Header("post processing elements")]
    public Volume vol;
    public LensDistortion distort;
    public ColorAdjustments saturation;
    private GameHandler info { get { return GameHandler.Instance; } }

    [Header("time variables")]
    public float time;
    void Awake()
    {
        vol = GetComponent<Volume>();
        LensDistortion tempD;
        if (vol.profile.TryGet<LensDistortion>(out tempD))
        { distort = tempD; }
        ColorAdjustments tempS;
        if (vol.profile.TryGet<ColorAdjustments>(out tempS))
        { saturation = tempS; }

    }

    public void Initiate() {
        OnSat(time);
         OnLens(time);
    }
    public void End() {
        OffSat(time);
        OffLens(time);
    }

    private async Task OnSat(float seconds)
    {

        while (saturation.saturation != -100) {
            if (!info.slowed) { break; }
            await Task.Delay(TimeSpan.FromSeconds(seconds));
            saturation.saturation.value--;
        }
    }

    private async Task OffSat(float seconds)
    {

        while (saturation.saturation.value < 0)
        {
            if (info.slowed) { break; }
            await Task.Delay(TimeSpan.FromSeconds(seconds));
            saturation.saturation.value++;
        }
    }
    private async Task OnLens(float seconds)
    {

        while (distort.intensity.value > -.5f)
        {
            if (!info.slowed) { break; }

            await Task.Delay(TimeSpan.FromSeconds(seconds));
            distort.intensity.value-=.01f;
        }
    }

    private async Task OffLens(float seconds)
    {

        while (distort.intensity.value < 0)
        {
            if (info.slowed) { break; }
            await Task.Delay(TimeSpan.FromSeconds(seconds));
            distort.intensity.value += .01f;
        }
    }
}
