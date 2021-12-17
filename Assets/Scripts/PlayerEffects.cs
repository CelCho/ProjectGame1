using UnityEngine;
using System.Collections;

public class PlayerEffects : MonoBehaviour
{

    public IEnumerator InvinsiblePlayer(float time)
    {
        PlayerHealth.instance.isInvincible = true;
        PlayerMovement.instance.isAttack = true;
        PlayerMovement.instance.animator.SetTrigger("Invinsible");
        yield return new WaitForSeconds(time);
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
