using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;

public class Game : MonoBehaviour
{
    public GameObject[] slides;
    public GameObject startButton;

    private bool launchSpeedBool = true;
    public bool gameIsStart = false;

    public static Game instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de Game dans la scene");
            return;
        }

        instance = this;
    }

    public void RecupData()
    {
        Inventory.instance.coinsCount = PlayerPrefs.GetInt("coinsCount", 0);
        Inventory.instance.scoreMax = PlayerPrefs.GetFloat("scoreMax", 0);
        Inventory.instance.UpdateTextUI();
        PauseMenu.instance.UpdateTextUI();
    }

    public void SaveData()
    {
        PlayerPrefs.SetInt("coinsCount", Inventory.instance.coinsCount);
        PlayerPrefs.SetFloat("scoreMax", Inventory.instance.scoreMax);
    }

    public void GameStart()
    {
        if (gameIsStart)
        {      
            ButtonStart();    
        }
        else
        {
            startButton.SetActive(true);
            gameIsStart = true;
        }
        
    }
    
    public void GameStop()
    {
        startButton.SetActive(false);
        SaveData();
        PlayerMovement.instance.StopPlayer();
        CameraWaypoint.instance.StopVelocity();
        CameraWaypoint.instance.enabled = false;
        PlayerMovement.instance.enabled = false;
    }

    public void ButtonStart()
    {
        gameIsStart = true;
        RecupData();
        launchSpeed();
        PlayerMovement.instance.animator.SetTrigger("GameStart");
        PlayerMovement.instance.enabled = true;
        CameraWaypoint.instance.enabled = true;
    }

    private void launchSpeed()
    {
        if (launchSpeedBool)
        {
            StartCoroutine(speedUpgrade());
            launchSpeedBool = false;
        }
    }

    public IEnumerator speedUpgrade()
    {
        while (true && Game.instance.gameIsStart && CameraWaypoint.instance.speed <= 30)
        {
            yield return new WaitForSeconds(10f);
            PlayerMovement.instance.speed += 0.5f;
            CameraWaypoint.instance.speed += 0.5f;
        }
    }

    public void CreateSlide(Vector3 positions)
    {
        int nbRandom = Random.Range(0, slides.Length);
        GameObject slide = (GameObject)Instantiate(slides[nbRandom], new Vector3(positions.x, positions.y + 24, -1f), Quaternion.identity);
    }
}
