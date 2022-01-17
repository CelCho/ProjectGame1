using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    public Data data;

    public string levelToLoad;

    public GameObject homePage;
    public GameObject settingsWindow;
    public GameObject ShopWindow;
    public GameObject MissionsWindow;

    public Text coinsCountText;
    public Text scoreMaxText;

    public static MainMenu instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de MainMenu dans la scene");
            return;
        }

        instance = this;
    }

    private void Start() 
    {
        data.LoadData();
        UpdateInventory();
    }

    public void UpdateInventory()
    {
        coinsCountText.text = data.coins.ToString();
        scoreMaxText.text = data.hightScore.ToString();
    }

    public void StartGame()
    {
        if (data.mission1InProgress.activate)
        {
            data.mission1InProgress.finish = true;
            data.nbNotifMissions += 1;
        }
        SceneManager.LoadScene(levelToLoad);
        data.SaveData();
    }

    public void SettingsButton()
    {
        settingsWindow.SetActive(true);
    }

    public void OpenShopPanel()
    {
        homePage.SetActive(false);
        ShopWindow.SetActive(true);
    }

    public void CloseShopPanel()
    {
        homePage.SetActive(true);
        ShopWindow.SetActive(false);
        data.SaveData();
    }

    public void CloseSettingsWindow()
    {
        settingsWindow.SetActive(false);
    }

    public void LoadCreditsScene()
    {
        SceneManager.LoadScene("Credits");
    }
}
