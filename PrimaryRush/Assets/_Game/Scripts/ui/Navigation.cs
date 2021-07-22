using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Navigation : MonoBehaviour
{

    public void Menu()
    {
        FMODUnity.RuntimeManager.PlayOneShot("event:/UI_Select", GetComponent<Transform>().position); //Play UI Sound
        SceneManager.LoadScene("Menu");

    }

    public void Play()
    {
        FMODUnity.RuntimeManager.PlayOneShot("event:/UI_Select", GetComponent<Transform>().position); //Play UI Sound
        SceneManager.LoadScene("Game");

    }

    public void Credits()
    {
        FMODUnity.RuntimeManager.PlayOneShot("event:/UI_Select", GetComponent<Transform>().position); //Play UI Sound
        SceneManager.LoadScene("Credits");

    }
    public void How()
    {
        FMODUnity.RuntimeManager.PlayOneShot("event:/UI_Select", GetComponent<Transform>().position); //Play UI Sound
        SceneManager.LoadScene("How");

    }

    public void flashing() 
    {
        FMODUnity.RuntimeManager.PlayOneShot("event:/UI_Select", GetComponent<Transform>().position); //Play UI Sound    
         GameHandler.flash = !GameHandler.flash; 
    }
}
