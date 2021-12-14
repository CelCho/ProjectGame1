using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class GameOverManager : MonoBehaviour
{
    public GameObject gameOverUI;
    public GameObject panelGame;
    
    public Text scoreText;
    public Text nbBarrier;
    public Text nbKillMoob;

    public static GameOverManager instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de GameOverManager dans la scene");
            return;
        }

        instance = this;
    }

    public void OnPlayerDeath()
    {
        StartCoroutine(Wait());      
    }
    
    public IEnumerator Wait()
    {
        yield return new WaitForSeconds(2f);
        gameOverUI.SetActive(true);
        panelGame.SetActive(false);
        Game.instance.GameStop();  
        
        scoreText.text = PlayerHealth.instance.score.ToString();
        nbBarrier.text = PlayerHealth.instance.nbBarrier.ToString();
        nbKillMoob.text = PlayerHealth.instance.nbKillMoob.ToString();
    }

    public void RetryButton()
    {
        //Inventory.instance.RemoveCoins(CurrentSceneManager.instance.coinsPickedUpInThisSceneCount);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        PlayerHealth.instance.Respawn();
        Game.instance.GameStart();
        gameOverUI.SetActive(false);
    }

    public void MainMenuButton()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void QuitButton()
    {
        Application.Quit();
    }
}
