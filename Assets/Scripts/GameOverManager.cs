using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class GameOverManager : MonoBehaviour
{
    public GameObject gameOverUI;
    public GameObject panelGame;
    public Animator animator;
    
    public Text scoreText;
    public Text nbBarrier;
    public Text nbKillMoob;
    public Text nbBonus;

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
        animator.SetTrigger("FadeIn");
        StartCoroutine(Wait());      
    }
    
    public IEnumerator Wait()
    {
        yield return new WaitForSeconds(1f);
        gameOverUI.SetActive(true);
        panelGame.SetActive(false);
        Game.instance.GameStop();  
        
        scoreText.text = Inventory.instance.score.ToString();
        nbBarrier.text = Inventory.instance.nbBarrier.ToString();
        nbKillMoob.text = Inventory.instance.nbKillMoob.ToString();
        nbBonus.text = Inventory.instance.nbBonus.ToString();
    }

    public void RetryButton()
    {
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
