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
    private bool canTranslate = true;

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
        if (Game.instance.gameIsStart && canTranslate)
        {
            Vector3 dir = target.position - transform.position;
            transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);
            if (transform.position.y <= PlayerMovement.instance.transform.position.y - 1)
            {
                target = PlayerMovement.instance.waypointsRight.transform;
            }
        }
    }

    public IEnumerator Die()
    {
        Inventory.instance.nbKillMoob += 1;
        box.enabled = false;
        animator.SetTrigger("Die");
        yield return new WaitForSeconds(1.5f);
        Destroy(toDestroy);
    }

    public IEnumerator Attack()
    {
        PlayerHealth.instance.TakeDamage(1);
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
            if (PlayerMovement.instance.isAttack | PlayerEffects.instance.currentLifeShield !=0 | PlayerHealth.instance.isInvincible)
            { 
                StartCoroutine(Die());
            }
            else
            {
                StartCoroutine(Attack());
            }
        }
        else if (collision.transform.CompareTag("Barrier") | collision.transform.CompareTag("Rock") | collision.transform.CompareTag("Tree"))
        {
            canTranslate = false;
        }
    }
}
