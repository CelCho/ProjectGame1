using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Barrier : MonoBehaviour
{
    public int maxHealth = 1;
    public int currentHealth;
    
    public Vector3[] positions;

    public GameObject toDestroy;
    public BoxCollider2D box;
    public Animator animator;

    public void Start()
    {
        currentHealth = maxHealth;
        float posY = transform.position.y;
        int nbRandom = Random.Range(0, positions.Length);
        Vector3 positionActual = positions[nbRandom];
        positionActual.y += posY;
        transform.position = positionActual;
    }

    public void TakeDamage(int damage)
    {
        currentHealth -= damage;

        if (currentHealth <= 0)
        {
            Die();
            return;
        }
    }

    public void Die()
    {
        Destroy(toDestroy);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.CompareTag("Player"))
        {
            if (PlayerMovement.instance.isAttack)
            {
                Inventory.instance.nbBarrier += 1;
                animator.SetTrigger("Crach");
            }
            else
            {
                PlayerHealth playerHealth = collision.transform.GetComponent<PlayerHealth>();
                playerHealth.TakeDamage(1);
                box.enabled = false;
            }
        }
        if (collision.CompareTag("GroundCheck"))
        {
            Die();
        }
    }

    private void OnTriggerExit2D(Collider2D other) 
    {
        box.enabled = true;
    }
}
