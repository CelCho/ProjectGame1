using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour
{
    public static bool gameIsPaused = false;
    public static bool statsOpen = false;

    public Text scoreText;
    public Text nbBarrier;
    public Text nbKillMoob;

    public GameObject buttonOption;
    public GameObject panelStats;
    public GameObject panelGame;

    public GameObject pauseMenuUI;

    void Paused()
    {
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0;
        gameIsPaused = true;
        Game.instance.GameStop();
        panelGame.SetActive(false);

        
        scoreText.text = PlayerHealth.instance.score.ToString();
        nbBarrier.text = PlayerHealth.instance.nbBarrier.ToString();
        nbKillMoob.text = PlayerHealth.instance.nbKillMoob.ToString();
    }

    public void Resume()
    {
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1;
        gameIsPaused = false;
        Game.instance.GameStart();
        panelGame.SetActive(true);
    }

    public void Stats()
    {
        if (statsOpen)
        {
            buttonOption.SetActive(true);
            panelStats.SetActive(false);
            statsOpen = false;
        }
        else
        {
            buttonOption.SetActive(false);
            panelStats.SetActive(true);
            statsOpen = true;
        }
    }

    public void LoadMainMenu()
    {
        Resume();
        SceneManager.LoadScene("MainMenu");
    }

    
    public void ButtonPause()
    {
        if (gameIsPaused)
        {
            Resume();
        }
        else
        {
            Paused();
        }
    }

    public void ButtonCheat()
    {
        PlayerMovement.instance.isNotAttack = false;
    }
}
