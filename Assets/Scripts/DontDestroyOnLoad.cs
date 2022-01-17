using UnityEngine;
using UnityEngine.SceneManagement;

public class DontDestroyOnLoad : MonoBehaviour
{
    public GameObject[] objects;

    private void Awake()
    {
        foreach (var element in objects)
        {
            DontDestroyOnLoad(element);
        }
        
        SceneManager.LoadScene("MainMenu");
    }
}