using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour
{
    public static bool gameIsPaused = false;
    public static bool statsOpen = false;

    public Text coinsCountText;
    public Text scoreText;
    public Text scoreMaxText;
    public Text nbBarrier;
    public Text nbKillMoob;

    public GameObject buttonOption;
    public GameObject panelStats;
    public GameObject panelGame;

    public GameObject pauseMenuUI;
    
    public static PauseMenu instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de PauseMenu dans la scene");
            return;
        }

        instance = this;
    }
    public void Paused()
    {
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0;
        gameIsPaused = true;
        Game.instance.RecupData();
        Game.instance.GameStop();
        panelGame.SetActive(false);

        UpdateTextUI();        
    }
    public void UpdateTextUI()
    {
        coinsCountText.text = PlayerHealth.instance.coinsCount.ToString();
        scoreText.text = PlayerHealth.instance.score.ToString();
        scoreMaxText.text = PlayerHealth.instance.scoreMax.ToString();
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
