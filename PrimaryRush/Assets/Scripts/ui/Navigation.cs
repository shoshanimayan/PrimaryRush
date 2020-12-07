using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Navigation : MonoBehaviour
{
    public void Menu()
    {
        SceneManager.LoadScene("Menu");

    }

    public void Play()
    {
        SceneManager.LoadScene("Game");

    }

    public void Credits()
    {
        SceneManager.LoadScene("Credits");

    }
    public void How()
    {
        SceneManager.LoadScene("How");

    }
}
