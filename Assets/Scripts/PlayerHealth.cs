using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour
{
    public int maxHealth = 2;
    public int currentHealth;

    public int nbKillMoob;
    public int nbBarrier;

    public float score;
    public float scoreMax;
    public int coinsCount;
    public Text scoreText;
    public Text coinsCountText;

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
        if (Input.GetKeyDown(KeyCode.H))
        {
            TakeDamage(1);
        }
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
            heartsAnimator.SetTrigger("1life");

            if (currentHealth <= 0)
            {
                Die();
                return;
            }

            PlayerMovement.instance.isNotAttack = false;
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
        PlayerMovement.instance.StopVelocity();
        CameraWaypoint.instance.StopVelocity();
        GameOverManager.instance.OnPlayerDeath();
        if (score > scoreMax)
        {
            scoreMax = score;
        }
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
        PlayerMovement.instance.isNotAttack = true;
        isInvincible = false;
    }


    public void addScore(float amout)
    {
        score =  Mathf.FloorToInt(transform.position.y) + 6;
        UpdateTextUI();
    }
    
    public void AddCoins(int count)
    {
        coinsCount += count;
        UpdateTextUI();
    }

    public void RemoveCoins(int count)
    {
        coinsCount -= count;
        UpdateTextUI();
    }
    
    public void UpdateTextUI()
    {
        scoreText.text = score.ToString();
        coinsCountText.text = coinsCount.ToString();
    }
}
