using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public int maxHealth = 1;
    public int currentHealth;
    public GameObject toDestroy; 
    public Animator animator;

    public float speed;
    public int damageOnCollision = 1;

    public Vector3[] positions;


    public SpriteRenderer graphics;
    private Transform target;
    //private int destPoint = 0;

    public static Enemy instance;

    private void Awake()
    {
        if (instance != null)
        {
            //Debug.LogWarning("Il y a plus d'une instance de Enemy dans la scene");
            return;
        }

        instance = this;
    }
    void Start()
    {
        currentHealth = maxHealth;
        float posY = transform.position.y;
        target = PlayerMovement.instance.transform;
        int nbRandom = Random.Range(0, positions.Length);
        Vector3 positionActual = positions[nbRandom];
        positionActual.y += posY;
        transform.position = positionActual;
    }

    void Update()
    {
        if (Game.instance.gameIsStart)
        {
            Vector3 dir = target.position - transform.position;
            transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);

            if (Vector3.Distance(transform.position, target.position) < 0.3f)
            {
                /*destPoint = (destPoint + 1) % waypoints.Length;
                target = waypoints[destPoint];
                graphics.flipX = !graphics.flipX;*/
            }
        }
    }
    
    public void TakeDamage(int damage)
    {
        currentHealth -= damage;

        if (currentHealth <= 0)
        {
            StartCoroutine(Die());
            return;
        }
    }

    public IEnumerator Die()
    {
        animator.SetTrigger("Die");
        yield return new WaitForSeconds(1.5f);
        Destroy(toDestroy);
    }
        
    private void OnTriggerEnter2D(Collider2D collision)
    {    
        if (collision.CompareTag("GroundCheck"))
        {
            StartCoroutine(Die());
        }
        
        if (collision.transform.CompareTag("Player"))
        {
            if (PlayerMovement.instance.isAttack)
            {
                Inventory.instance.nbKillMoob += 1;
                StartCoroutine(Die());
            }
            else
            {
                PlayerHealth playerHealth = collision.transform.GetComponent<PlayerHealth>();
                playerHealth.TakeDamage(1);
            }
        }
    }
}
