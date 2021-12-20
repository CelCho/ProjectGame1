using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Barrier : MonoBehaviour
{
    public int maxHealth = 1;
    public int currentHealth;

    public GameObject toDestroy;
    public BoxCollider2D box;
    public Animator animator;

    public void Start()
    {
        currentHealth = maxHealth;
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
            }
        }
        if (collision.CompareTag("GroundCheck"))
        {
            Die();
        }
    }

    private IEnumerator BoxEnabled() 
    {
        box.enabled = false;
        while (transform.position.y + 3 >= PlayerMovement.instance.transform.position.y)
        {
             yield return new WaitForSeconds(0.01f);
        }
        box.enabled = true;
    }
}
