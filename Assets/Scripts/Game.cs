using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Game : MonoBehaviour
{
    public GameObject slide;
    public GameObject slideStart;
    public GameObject Text;
    public GameObject startButton;

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

    public void GameStart()
    {
        if (gameIsStart)
        {      
            ButtonStart();    
        }
        else
        {
            startButton.SetActive(true);
        }
        
        
    }
    
    public void GameStop()
    {
        Text.SetActive(false);
        gameIsStart = false;
        startButton.SetActive(false);
        PlayerMovement.instance.animator.ResetTrigger("GameStart");
        PlayerMovement.instance.StopVelocity();
        CameraWaypoint.instance.StopVelocity();
        CameraWaypoint.instance.enabled = false;
        PlayerMovement.instance.enabled = false;
    }

    public void ButtonStart()
    {   
        Text.SetActive(true);
        gameIsStart = true;
        PlayerMovement.instance.animator.SetTrigger("GameStart");
        PlayerMovement.instance.enabled = true;
        CameraWaypoint.instance.enabled = true;
        StartCoroutine(DeleteSlideStart());  
    }

    public void CreateSlide(Vector3 positions)
    {
        GameObject slides = (GameObject)Instantiate(slide, new Vector3(positions.x, positions.y + 24, -1f), Quaternion.identity);
    }

    public IEnumerator DeleteSlideStart()
    {
        yield return new WaitForSeconds(10f);
        Destroy(slideStart);
    }
}
