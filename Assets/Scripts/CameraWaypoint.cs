using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraWaypoint : MonoBehaviour
{
    public float speed;
    public Rigidbody2D rb;
    private Vector3 velocity = Vector3.zero;

    public static CameraWaypoint instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de CameraWaypoint dans la scene");
            return;
        }

        instance = this;
    }

    private void Start() 
    {
        speed = PlayerMovement.instance.speed;    
    }

    void Update()
    {
        Vector3 targetVelocity = new Vector2(0, speed);
        rb.velocity = Vector3.SmoothDamp(rb.velocity, targetVelocity, ref velocity, .05f);
    }

    public void StopVelocity()
    {
        rb.velocity = Vector3.zero;
    }
}
