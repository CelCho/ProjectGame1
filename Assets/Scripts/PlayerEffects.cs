using UnityEngine;
using System.Collections;

public class PlayerEffects : MonoBehaviour
{
    public int maxLifeShield = 1;
    public int currentLifeShield = 0;

    public static PlayerEffects instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de PlayerEffects dans la scene");
            return;
        }

        instance = this;
    }

    public void Shield(Item currentItem)
    {
        PlayerHealth.instance.currentHealth = currentItem.hpGiven;
        maxLifeShield = Mathf.FloorToInt(currentItem.hpShield);
        currentLifeShield = maxLifeShield;
    }

    public IEnumerator InvinsiblePlayer(float time)
    {
        PlayerHealth.instance.isInvincible = true;
        PlayerMovement.instance.isAttack = true;
        PlayerMovement.instance.animator.SetTrigger("Invinsible");
        yield return new WaitForSeconds(time - PlayerHealth.instance.invincibilityTimeAfterHit);
        StartCoroutine(PlayerHealth.instance.InvincibilityFlash());
        StartCoroutine(PlayerHealth.instance.HandleInvincibilityDelay());
        yield return new WaitForSeconds(PlayerHealth.instance.invincibilityTimeAfterHit);
        PlayerHealth.instance.isInvincible = false;
        PlayerMovement.instance.isAttack = false;
        PlayerMovement.instance.animator.ResetTrigger("Invinsible");
    }

    public void AddSpeed(int speedGiven, float speedDuration)
    {
        PlayerMovement.instance.speed += speedGiven;
        StartCoroutine(RemoveSpeed(speedGiven, speedDuration));
    }

    private IEnumerator RemoveSpeed(int speedGiven, float speedDuration)
    {
        yield return new WaitForSeconds(speedDuration);
        PlayerMovement.instance.speed -= speedGiven;
    }
}
