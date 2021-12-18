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
    public Text nbBonus;

    public Animator heartsMenuAnimator;
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
        heartsMenuAnimator.SetInteger("CurrentHealth", PlayerHealth.instance.currentHealth); 

        UpdateTextUI();        
    }

    public void Resume()
    {
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1;
        gameIsPaused = false;
        Game.instance.GameStart();
        panelGame.SetActive(true);
    }

    public void UpdateTextUI()
    {
        coinsCountText.text = Inventory.instance.coinsCount.ToString();
        scoreText.text = Inventory.instance.score.ToString();
        scoreMaxText.text = Inventory.instance.scoreMax.ToString();
        nbBarrier.text = Inventory.instance.nbBarrier.ToString();
        nbKillMoob.text = Inventory.instance.nbKillMoob.ToString();
        nbBonus.text = Inventory.instance.nbBonus.ToString();
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
        PlayerMovement.instance.isAttack = true;
    }
}
