using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public class PlayerMovement : MonoBehaviour
{
    public float speed;
    public float horizontalSpeed;
    public Rigidbody2D rigidbodyPlayer;
    private Vector3 velocity = Vector3.zero;

    public bool isAttack = false;
    public bool canAttack = true;
    public Animator animator;

    public Transform waypointsRight;
    public Transform waypointsLeft;

    private int direction;
    private float dragDistance;
    private Vector2 firstPressPos;
    private Vector2 secondPressPos;
    private Vector2 currentSwipe;

    public static PlayerMovement instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de PlayerMovement dans la scene");
            return;
        }

        instance = this;
    }
    
    private void Start()
    {
        dragDistance = Screen.height * 15 / 100;
    }

    private void Update() 
    {
        Vector3 targetVelocity = new Vector2(0, speed);
        rigidbodyPlayer.velocity = Vector3.SmoothDamp(rigidbodyPlayer.velocity, targetVelocity, ref velocity, .05f);

        Movement();
    }
 
    public void Movement()
    {
        if(Input.touches.Length > 0)
        {
            Touch t = Input.GetTouch(0);
            Vector3 touchPosition = Camera.main.ScreenToWorldPoint(t.position);
            touchPosition.y = transform.position.y;
            touchPosition.z = 0f;
            Vector3 dir = touchPosition - transform.position;
            if (dir.x > 0.3f | dir.x < -0.3f)
            {
                if ((dir.x < 0 && transform.position.x >= waypointsLeft.position.x) | (dir.x > 0 && transform.position.x <= waypointsRight.position.x))
                {
                    if (dir.x <= 1 && dir.x >= -1)
                    {
                        horizontalSpeed = 0.1f;
                    }
                    transform.Translate(dir.normalized * horizontalSpeed, Space.World);
                    horizontalSpeed = 0.1f;
                }   
            }
            

            if(t.phase == TouchPhase.Began)
            {
                firstPressPos = new Vector2(t.position.x,t.position.y);
            }
            if(t.phase == TouchPhase.Ended)
            {
                secondPressPos = new Vector2(t.position.x,t.position.y);
                currentSwipe = new Vector3(secondPressPos.x - firstPressPos.x, secondPressPos.y - firstPressPos.y);
                
                currentSwipe.Normalize();
    
                if(currentSwipe.y > 0  && currentSwipe.x > -0.5f  && currentSwipe.x < 0.5f)
                {
                    StartCoroutine(Attack());
                }
            }
        }
    }

    public IEnumerator Attack()
    {
        if (canAttack)
        {
            Debug.Log("Attack");
            isAttack = true;
            canAttack = false;

            animator.SetTrigger("Attack");
            float posyplus = 0f;
            Vector3 newPos = transform.position;
            for (int j = 0; j < 6; j++)
            {
                newPos = transform.position;
                newPos.y = CameraWaypoint.instance.transform.position.y + posyplus;
                transform.position = newPos;
                yield return new WaitForSeconds(0.05f);
                posyplus += 0.25f;
            }
            newPos = transform.position;
            newPos.y = CameraWaypoint.instance.transform.position.y + 2;
            transform.position = newPos;
            yield return new WaitForSeconds(0.4f);
            for (int i = 0; i < 7; i++)
            {
                newPos = transform.position;
                newPos.y = CameraWaypoint.instance.transform.position.y + posyplus;
                transform.position = newPos;
                yield return new WaitForSeconds(0.05f);
                posyplus -= 0.25f;
            }
            animator.ResetTrigger("Attack");
            newPos = transform.position;
            newPos.y = CameraWaypoint.instance.transform.position.y - 1;
            isAttack = false;
            canAttack = true;
        }
    }

    public void ButtonAttack()
    {
        StartCoroutine(Attack());
    }

    public void StopPlayer()
    {
        rigidbodyPlayer.velocity = Vector3.zero;
        animator.ResetTrigger("GameStart");
    }
    
    /*public IEnumerator AttackSpeed()
    {
        float Aspeed = speed;
        speed = 6*Aspeed;
        while (transform.position.y <= CameraWaypoint.instance.transform.position.y + 2)
        {
            yield return new WaitForSeconds(0.001f);
        }
        speed = -Aspeed;
        while (transform.position.y >= CameraWaypoint.instance.transform.position.y)
        {
            yield return new WaitForSeconds(0.001f);
        }
        speed = CameraWaypoint.instance.speed;
        isAttack = false;
        canAttack = true;
    }*/
}
