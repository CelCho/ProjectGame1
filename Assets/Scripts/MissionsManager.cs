using UnityEngine;

public class MissionsManager : MonoBehaviour
{
    public GameObject MissionsWindow;

    public Animator animatorNotif;
    public int nbnotif;

    public static MissionsManager instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de MissionsManager dans la scene");
            return;
        }

        instance = this;
    }

    private void Start() 
    {
        nbnotif = MainMenu.instance.data.nbNotifMissions;
    }

    private void Update()
    {
        animatorNotif.SetInteger("NbNotif", nbnotif);         
    }

    public void OpenMissionsPanel()
    {
        MainMenu.instance.homePage.SetActive(false);
        MissionsWindow.SetActive(true);
        NotifOpen();
    }

    public void CloseMissionsPanel()
    {
        MainMenu.instance.homePage.SetActive(true);
        MissionsWindow.SetActive(false);
    }

    public void NotifOpen()
    {
        nbnotif = 0;
        MainMenu.instance.data.nbNotifMissions = 0;
    }
}
