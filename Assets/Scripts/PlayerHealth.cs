using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour
{
    public int maxHealth = 2;
    public int currentHealth;

    public Animator heartsAnimator;

    public float invincibilityTimeAfterHit = 3f;
    public float invincibilityFlashDelay = 0.2f;
    public bool isInvincible = false;
    
    public SpriteRenderer graphics;

    public static PlayerHealth instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de PlayerHealth dans la scene");
            return;
        }

        instance = this;
    }

    void Start()
    {
        currentHealth = maxHealth;
    }

    void Update()
    {
        heartsAnimator.SetInteger("CurrentHealth", currentHealth); 
        if (Input.GetKeyDown(KeyCode.H))
        {
            TakeDamage(1);
        }
        else if (Input.GetKeyDown(KeyCode.B))
        {
            BonusHeartsPlayer();
        }
    }

    public void BonusHeartsPlayer()
    {
        currentHealth = 3;
    }

    public void HealPlayer(int amount)
    {
        if ((currentHealth + amount) > maxHealth)
        {
            currentHealth = maxHealth;
        }
        else
        {
            currentHealth += amount;
        }
    }

    public void TakeDamage(int damage)
    {
        if (!isInvincible)
        {
            currentHealth -= damage;

            if (currentHealth <= 0)
            {
                Die();
                return;
            }

            PlayerMovement.instance.isAttack = true;
            isInvincible = true;
            StartCoroutine(InvincibilityFlash());
            StartCoroutine(HandleInvincibilityDelay());
        }
    }

    public void Die()
    {
        /*PlayerMovement.instance.enabled = false;
        PlayerMovement.instance.rb.bodyType = RigidbodyType2D.Kinematic;
        PlayerMovement.instance.rb.velocity = Vector3.zero;
        PlayerMovement.instance.playerCollider.enabled = false;*/
        PlayerMovement.instance.animator.SetTrigger("Die");
        PlayerMovement.instance.StopPlayer();
        CameraWaypoint.instance.StopVelocity();
        GameOverManager.instance.OnPlayerDeath();
        Inventory.instance.SaveScoreMax();
        Game.instance.SaveData();
        Game.instance.GameStop();
    }

    public void Respawn()
    {
        /*PlayerMovement.instance.enabled = true;
        PlayerMovement.instance.animator.SetTrigger("Respawn");
        PlayerMovement.instance.rb.bodyType = RigidbodyType2D.Dynamic;
        PlayerMovement.instance.playerCollider.enabled = true;
        currentHealth = maxHealth;*/
    }

    public IEnumerator InvincibilityFlash()
    {
        while (isInvincible)
        {
            graphics.color = new Color(1f, 1f, 1f, 0f);
            yield return new WaitForSeconds(invincibilityFlashDelay);
            graphics.color = new Color(1f, 1f, 1f, 1f);
            yield return new WaitForSeconds(invincibilityFlashDelay);
        }
    }

    public IEnumerator HandleInvincibilityDelay()
    {
        yield return new WaitForSeconds(invincibilityTimeAfterHit);
        PlayerMovement.instance.isAttack = false;
        isInvincible = false;
    }
}
