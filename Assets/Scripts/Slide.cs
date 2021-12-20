using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Slide : MonoBehaviour
{
    public Rigidbody2D rb;
    
    private Vector3 velocity = Vector3.zero;
    private float verticalMovement;
    public static Slide instance;

    private void Awake()
    {
        instance = this;
    }

    private void Update()
    {
        if (Game.instance.gameIsStart)
        {
            Inventory.instance.AddScore(PlayerMovement.instance.speed/10);
        }
    }
}
