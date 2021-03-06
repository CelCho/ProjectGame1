using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour
{
    public static bool gameIsPaused = false;
    public static bool statsOpen = false;
    private static bool quitOpen = false;

    public Text coinsCountText;
    public Text scoreText;
    public Text scoreMaxText;
    public Text nbBarrier;
    public Text nbKillMoob;
    public Text nbBonus;

    
    public Text countDown;

    public Animator heartsMenuAnimator;
    public GameObject buttonOption;
    public GameObject panelStats;
    public GameObject panelGame;
    public GameObject panelQuit;

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

    private void Start() 
    {
        Game.instance.RecupData();
    }

    public void Paused()
    {
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0;
        gameIsPaused = true;
        Game.instance.GameStop();
        panelGame.SetActive(false);
        heartsMenuAnimator.SetInteger("CurrentHealth", PlayerHealth.instance.currentHealth); 
        Game.instance.SaveData();

        UpdateTextUI();        
    }

    public void Resume()
    {
        if (Game.instance.gameIsStart)
        {
            StartCoroutine(CountDown());
        }
        else
        {
            Game.instance.GameStart();
        }
        pauseMenuUI.SetActive(false);
        gameIsPaused = false;
        Time.timeScale = 1;
        panelGame.SetActive(true);
    }

    public IEnumerator CountDown()
    {
        int nb = 3;
        while (nb > 0)
        {
            countDown.text = nb.ToString();
            yield return new WaitForSeconds(1f);
            nb -= 1;
        }
        countDown.text = "";
        Game.instance.GameStart();
    }

    public void UpdateTextUI()
    {
        coinsCountText.text = Inventory.instance.coinsCountTotal.ToString();
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

    public void WantToQuit()
    {
        if (quitOpen)
        {
            buttonOption.SetActive(true);
            panelQuit.SetActive(false);
            quitOpen = false;
        }
        else
        {
            buttonOption.SetActive(false);
            panelQuit.SetActive(true);
            quitOpen = true;
        }
    }

    public void ButtonQuit()
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
        PlayerHealth.instance.isInvincible = true;
        Vector3 pos = PlayerMovement.instance.transform.position;
        pos.x = 10f;
        PlayerMovement.instance.transform.position = pos;
    }
}
