using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public class PlayerMovement : MonoBehaviour
{
    public float speed;
    public float lateralSpeed = 1;
    public Rigidbody2D rb;
    public bool isNotAttack = true;
    private Vector3 velocity = Vector3.zero;
    
    private Vector3 fp;
    private Vector3 lp;
    private float dragDistance;

    public Transform waypointsRight;
    public Transform waypointsLeft;
    public Animator animator;

    private Vector3 touchPosition = Vector3.zero;
    private float horizontalMovement;
    

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
    
 
    void Start()
    {
        dragDistance = Screen.height * 15 / 100;
    }
 
    void Update()
    {
        Vector3 targetVelocity = new Vector2(0, speed);
        rb.velocity = Vector3.SmoothDamp(rb.velocity, targetVelocity, ref velocity, .05f);
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            Vector3 touchPosition = Camera.main.ScreenToWorldPoint(touch.position);
            touchPosition.y = transform.position.y;
            touchPosition.z = 0f;


            if (touchPosition.x <= waypointsRight.position.x && touchPosition.x >= waypointsLeft.position.x)
            {
                if (-1f < (transform.position.x - touchPosition.x) &&  (transform.position.x - touchPosition.x) < 1f)
                {
                    transform.position = touchPosition;                    
                }
            }
            
            if (touch.phase == TouchPhase.Began) //check for the first touch
            {
                fp = touch.position;
                lp = touch.position;
            }
            else if (touch.phase == TouchPhase.Moved) // update the last position based on where they moved
            {
                lp = touch.position;
            }
            else if (touch.phase == TouchPhase.Ended) //check if the finger is removed from the screen
            {
                lp = touch.position;  //last touch position. Ommitted if you use list
 
                //Check if drag distance is greater than 20% of the screen height
                if (Mathf.Abs(lp.x - fp.x) > dragDistance || Mathf.Abs(lp.y - fp.y) > dragDistance)
                {//It's a drag
                 //check if the drag is vertical or horizontal
                    if (Mathf.Abs(lp.x - fp.x) > Mathf.Abs(lp.y - fp.y))
                    {   //If the horizontal movement is greater than the vertical movement...
                        if ((lp.x > fp.x))  //If the movement was to the right)
                        {   //Right swipe
                            /*Vector3 touchPosition = Camera.main.ScreenToWorldPoint(touch.position);
                            touchPosition.y = transform.position.y;
                            touchPosition.z = 0f;
                            if (touchPosition.x <= waypointsRight.position.x && touchPosition.x >= waypointsLeft.position.x)
                            {
                                transform.position = touchPosition;
                            }*/
                        }
                        else
                        {   //Left swipe
                            /*Vector3 touchPosition = Camera.main.ScreenToWorldPoint(touch.position);
                            touchPosition.y = transform.position.y;
                            touchPosition.z = 0f;
                            if (touchPosition.x <= waypointsRight.position.x && touchPosition.x >= waypointsLeft.position.x)
                            {
                                transform.position = touchPosition;
                            }*/
                        }
                    }
                    else
                    {
                        if (lp.y > fp.y)
                        {   //Up swipe
                            Attack();
                        }
                        else
                        {   //Down swipe
                            Debug.Log("Down Swipe");
                        }
                    }
                }
                else
                {   //It's a tap as the drag distance is less than 20% of the screen height
                    /*Vector3 touchPosition = Camera.main.ScreenToWorldPoint(touch.position);
                    touchPosition.y = transform.position.y;
                    touchPosition.z = 0f;
                    if (touchPosition.x <= waypointsRight.position.x && touchPosition.x >= waypointsLeft.position.x)
                    {
                        transform.position = touchPosition;
                    }*/
                }
            
            }
        }
    }

    private void Attack()
    {
        if (isNotAttack)
        {
            Debug.Log("Attack");
            StartCoroutine(AttackSpeed());
            isNotAttack = false;
        }
    }

    public IEnumerator AttackSpeed()
    {
        float Aspeed = speed;
        speed = 6*Aspeed;
        while (transform.position.y <= CameraWaypoint.instance.transform.position.y + 2)
        {
            yield return new WaitForSeconds(0.01f);
        }
        speed = Aspeed/6;
        while (transform.position.y >= CameraWaypoint.instance.transform.position.y)
        {
            yield return new WaitForSeconds(0.01f);
        }
        speed = CameraWaypoint.instance.speed;
        isNotAttack = true;
    }

    public void StopVelocity()
    {
        rb.velocity = Vector3.zero;
    }
    
    
    /*private void Update() 
    {
        Vector3 targetVelocity = new Vector2(0, speed);
        rb.velocity = Vector3.SmoothDamp(rb.velocity, targetVelocity, ref velocity, .05f);
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Vector3 touchPosition = Camera.main.ScreenToWorldPoint(touch.position);
            touchPosition.y = transform.position.y;
            touchPosition.z = 0f;
            if (touchPosition.x <= waypointsRight.position.x && touchPosition.x >= waypointsLeft.position.x)
            {
                transform.position = touchPosition;
            }

            
        }
    }*/
}
