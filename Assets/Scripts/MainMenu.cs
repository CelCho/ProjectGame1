using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    public string levelToLoad;

    public GameObject startPanel;
    public GameObject settingsWindow;
    public GameObject ShopWindow;
    
    public int coinsCount;
    public Text coinsCountText;

    public float scoreMax;
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
        coinsCount = PlayerPrefs.GetInt("coinsCount", 0);
        scoreMax = PlayerPrefs.GetFloat("scoreMax", 0);
        UpdateInventory();
    }

    public void UpdateInventory()
    {
        coinsCountText.text = coinsCount.ToString();
        scoreMaxText.text = scoreMax.ToString();
    }

    public void StartGame()
    {
        SceneManager.LoadScene(levelToLoad);
    }

    public void SettingsButton()
    {
        settingsWindow.SetActive(true);
    }

    public void OpenShopPanel()
    {
        startPanel.SetActive(false);
        ShopWindow.SetActive(true);
    }

    public void CloseShopPanel()
    {
        startPanel.SetActive(true);
        ShopWindow.SetActive(false);
        PlayerPrefs.SetInt("coinsCount", coinsCount);
    }

    public void CloseSettingsWindow()
    {
        settingsWindow.SetActive(false);
    }

    public void LoadCreditsScene()
    {
        SceneManager.LoadScene("Credits");
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
