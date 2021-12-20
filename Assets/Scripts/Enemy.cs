using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public int maxHealth = 1;
    public int currentHealth;
    public PolygonCollider2D box;
    public GameObject toDestroy;
    public Animator animator;

    public float speed;
    public int damageOnCollision = 1;

    public Vector3[] positions;


    public SpriteRenderer graphics;
    private Transform target;

    public static Enemy instance;

    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        currentHealth = maxHealth;
        target = PlayerMovement.instance.transform;
    }

    void Update()
    {
        if (Game.instance.gameIsStart)
        {
            Vector3 dir = target.position - transform.position;
            transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);
        }
    }

    public IEnumerator Die()
    {
        box.enabled = false;
        animator.SetTrigger("Die");
        yield return new WaitForSeconds(1.5f);
        Destroy(toDestroy);
    }
        
    private void OnTriggerEnter2D(Collider2D collision)
    {    
        if (collision.CompareTag("GroundCheck"))
        {
            Destroy(toDestroy);
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
