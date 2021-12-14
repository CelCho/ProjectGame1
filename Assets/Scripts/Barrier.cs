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
            if (PlayerMovement.instance.isNotAttack)
            {
                PlayerHealth playerHealth = collision.transform.GetComponent<PlayerHealth>();
                playerHealth.TakeDamage(1);
                StartCoroutine(BoxEnabled());
            }
            else
            {
                PlayerHealth.instance.nbBarrier += 1;
                animator.SetTrigger("Crach");
            }
        }
        if (collision.CompareTag("GroundCheck"))
        {
            Die();
        }
    }
    
    public IEnumerator BoxEnabled()
    {
        box.enabled = false;
        yield return new WaitForSeconds(1);
        box.enabled = true;
    }
}
