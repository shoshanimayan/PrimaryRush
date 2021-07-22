using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

//todo
//score ui
//slow meter ui
//end menu ui
public class UIHandler : MonoBehaviour
{
    [Header("ui elements")]
    public TMP_Text score;
    public Slider timeSlider;
    private GameHandler info { get { return GameHandler.Instance; } }

    //end screen variables
    public GameObject endScreen;
    public TMP_Text highScore;
    public TMP_Text yourScore;


    private void Awake()
    {
        endScreen.SetActive(false);
    }

    private IEnumerator closer() {

        yield return new WaitForSeconds(1);
        endScreen.SetActive(true);

        if (PlayerPrefs.HasKey("score"))
        {
            if (PlayerPrefs.GetFloat("score") < info.score)
            {
                highScore.text = "Congratulations!";
                yourScore.text = "New Personal Best of " + info.score.ToString();
                PlayerPrefs.SetFloat("score", info.score);

            }
            else
            {
                highScore.text = "High Score: " + PlayerPrefs.GetFloat("score").ToString(); ;
                yourScore.text = "Your Score: " + info.score.ToString();
            }
        }
        else
        {
            PlayerPrefs.SetFloat("score", info.score);
            highScore.text = "Congratulations!";
            yourScore.text = "New Personal Best of " + info.score.ToString();
        }
    }

    /// <summary>
    /// sets up end screen UI
    /// </summary>

    public void EndUi() 
    {
        StartCoroutine(closer());
    
    }

    //buttons

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

    public void Reload()
    {
        FMODUnity.RuntimeManager.PlayOneShot("event:/UI_Select", GetComponent<Transform>().position); //Play UI Sound
        info.Restart();
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    private void Update() {

        if (info.alive)
        {
            score.text = "Score: " + info.score.ToString();
            timeSlider.value = info.speedbar / 100;
        }
        

    }
}
