using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : MonoBehaviour
{
    public int nbDie;
    public int nbKillMoob;
    public int nbBarrier;
    public int nbBonus;

    public float score;
    public float scoreMax;
    public int coinsCount;
    public int coinsCountTotal;
    public Text scoreText;
    public Text coinsCountText;

    public PlayerEffects playerEffects;

    public static Inventory instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de Inventory dans la scene");
            return;
        }

        instance = this;
    }
    
    public void ConsumeItem(Item currentItem)
    {   
        if (currentItem.hpGiven == 3 && currentItem.hpShield != 0)
        {
            playerEffects.Shield(currentItem);
        }
        else
        {
            PlayerHealth.instance.HealPlayer(currentItem.hpGiven);
        }

        if (currentItem.timeInvinsible != 0)
        {
            StartCoroutine(playerEffects.InvinsiblePlayer(currentItem.timeInvinsible));
        }
        playerEffects.AddSpeed(currentItem.speedGiven, currentItem.speedDuration);
        nbBonus += 1;
    }

    public void SaveScoreMax()
    {
        if (score > scoreMax)
        {
            scoreMax = score;
        }
    }

    public void AddScore()
    {
        score =  Mathf.FloorToInt(CameraWaypoint.instance.transform.position.y);
        UpdateTextUI();
    }
    
    public void AddCoins(int count)
    {
        coinsCountTotal += count;
        coinsCount += count;
        UpdateTextUI();
    }

    public void RemoveCoins(int count)
    {
        coinsCountTotal -= count;
        UpdateTextUI();
    }
    
    public void UpdateTextUI()
    {
        scoreText.text = score.ToString();
        coinsCountText.text = coinsCount.ToString();
    }
}
