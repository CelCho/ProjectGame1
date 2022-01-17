using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Inventory/Data")]
public class Data : ScriptableObject
{
    public int coins;
    public float hightScore;
    public int nbNotifMissions;

    public int nbKillMoob;
    public int nbBarrier;
    public int nbBonus;
    public int nbDie;

    public int idSkin;
    public int idScene;
    public int idTrails;

    public Missions mission1InProgress;
    //public Missions mission2InProgress;
    //public Missions mission3InProgress;


    public Missions[] allMissions;
    
    public static Data instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de Data dans la scene");
            return;
        }

        instance = this;
    }

    public void SaveData()
    {
        PlayerPrefs.SetInt("coinsCount", coins);
        PlayerPrefs.SetFloat("hightScore", hightScore);

        PlayerPrefs.SetInt("idSkin", idSkin);
        PlayerPrefs.SetInt("idScene", idScene);
        PlayerPrefs.SetInt("idTrails", idTrails);

        PlayerPrefs.SetInt("idmission1InProgress", mission1InProgress.id);
        //PlayerPrefs.SetInt("idmission2InProgress", mission2InProgress.id);
        //PlayerPrefs.SetInt("idmission2InProgress", mission2InProgress.id);
    }

    public void LoadData()
    {
        coins = PlayerPrefs.GetInt("coinsCount", 0);
        hightScore = PlayerPrefs.GetFloat("hightScore", 0);
        idSkin = PlayerPrefs.GetInt("idSkin", 1);
        idScene = PlayerPrefs.GetInt("idScene", 1);
        idTrails = PlayerPrefs.GetInt("idTrails", 1);

        int id = PlayerPrefs.GetInt("idmission1InProgress", 1);
        bool trouve = false;
        int index = 0;
        while (! trouve && index < allMissions.Length - 1)
        {
            if (allMissions[index].id == id)
            {
                trouve = true;
            }
            index += 1;
        }
        if (trouve)
        {
            mission1InProgress = allMissions[index];
        }
        else
        {
            mission1InProgress = allMissions[0];
        }
        /*
        id = PlayerPrefs.GetInt("idmission2InProgress", 1);
        trouve = false;
        index = 0;
        while (! trouve && index < allMissions.Length - 1)
        {
            if (allMissions[index].id == id)
            {
                trouve = true;
            }
            index += 1;
        }
        if (trouve)
        {
            mission2InProgress = allMissions[index];
        }
        else
        {
            mission2InProgress = allMissions[0];
        }

        id = PlayerPrefs.GetInt("idmission3InProgress", 1);
        trouve = false;
        index = 0;
        while (! trouve && index < allMissions.Length - 1)
        {
            if (allMissions[index].id == id)
            {
                trouve = true;
            }
            index += 1;
        }
        if (trouve)
        {
            mission3InProgress = allMissions[index];
        }
        else
        {
            mission3InProgress = allMissions[0];
        }*/
    }
}
