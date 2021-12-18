using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Slide : MonoBehaviour
{
    public GameObject barrier;
    public GameObject enemy;
    public GameObject coin;
    public GameObject apple;
    public GameObject goldenApple;

    public float timeToSpawnObject;

    public Rigidbody2D rb;
    
    private Vector3 velocity = Vector3.zero;
    private float verticalMovement;
    public static Slide instance;

    private void Awake()
    {
        instance = this;
    }
    private void Start() 
    {
        int nbRandom = Random.Range(0, 101);
        if (nbRandom <= 70)
        {
            int nb = 3;
            if (Inventory.instance.score >= 1000)
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
        nbRandom = Random.Range(0, 101);
        if (nbRandom >= 85)
        {
            CreateApple(1, goldenApple);
        }
        else if (nbRandom <= 50)
        {
            CreateApple(1, apple);
        }
        CreateCoin(1);
    }

    private void Update()
    {
        if (Game.instance.gameIsStart)
        {
            Inventory.instance.AddScore(PlayerMovement.instance.speed/10);
        }
        if (Inventory.instance.score >= 5000)
        {
            timeToSpawnObject = 1;
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
    
    public void CreateCoin(int number)
    {
        for (int i = 0; i < number; i++)
        { 
            GameObject Coins = (GameObject)Instantiate(coin, new Vector3(transform.position.x, transform.position.y, -1f), Quaternion.identity);
        }
    }    
    
    public void CreateApple(int number, GameObject Apple)
    {
        for (int i = 0; i < number; i++)
        { 
            GameObject Apples = (GameObject)Instantiate(Apple, new Vector3(transform.position.x, transform.position.y + 4, -1f), Quaternion.identity);
        }
    }
}
