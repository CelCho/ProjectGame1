using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Slide : MonoBehaviour
{
    public GameObject barrier;
    public GameObject enemy;
    public float timeToSpawnObject;
    private bool launchSpeedBool = true;

    public Rigidbody2D rb;
    
    private Vector3 velocity = Vector3.zero;
    private float verticalMovement;
    public static Slide instance;

    private void Awake()
    {
        if (instance != null)
        {
            //Debug.LogWarning("Il y a plus d'une instance de Slide dans la scene");
            return;
        }

        instance = this;
    }
    private void Start() 
    {
        int nbRandom = Random.Range(0, 101);
        if (nbRandom <= 70)
        {
            int nb = 3;
            if (PlayerHealth.instance.score >= 1000)
            {
                nb = 5;
            }
            int nbBarrier = Random.Range(1, nb);
            CreateBarrier(nbBarrier);
            
        }
        else
        {
            CreateEnemy(1);
        }
    }

    private void Update()
    {
        if (Game.instance.gameIsStart)
        {
            launchSpeed();
            PlayerHealth.instance.addScore(PlayerMovement.instance.speed/10);
        }
        if (PlayerHealth.instance.score >= 5000)
        {
            timeToSpawnObject = 1;
        }
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

    public void CreateBarrier(int number)
    {
        for (int i = 0; i < number; i++)
        { 
            GameObject barriers = (GameObject)Instantiate(barrier, new Vector3(transform.position.x, transform.position.y, -1f), Quaternion.identity);
        }
    }
    
    public void CreateEnemy(int number)
    {
        for (int i = 0; i < number; i++)
        { 
            GameObject Enemys = (GameObject)Instantiate(enemy, new Vector3(transform.position.x, transform.position.y, -1f), Quaternion.identity);
        }
    }
}
