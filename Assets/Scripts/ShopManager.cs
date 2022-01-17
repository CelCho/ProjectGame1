using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopManager : MonoBehaviour
{
    public GameObject homePage;
    public GameObject shopSkinPanel;
    public GameObject shopScenePanel;
    public GameObject shopTrailsPanel;


    public void OpenScenePanel()
    {
        homePage.SetActive(false);
        shopScenePanel.SetActive(true);
    }

    public void CloseScenePanel()
    {
        homePage.SetActive(true);
        shopScenePanel.SetActive(false);
    }

    public void OpenSkinPanel()
    {
        homePage.SetActive(false);
        shopSkinPanel.SetActive(true);
    }

    public void CloseSkinPanel()
    {
        homePage.SetActive(true);
        shopSkinPanel.SetActive(false);
    }

    public void OpenTrailsPanel()
    {
        homePage.SetActive(false);
        shopTrailsPanel.SetActive(true);
    }

    public void CloseTrailsPanel()
    {
        homePage.SetActive(true);
        shopTrailsPanel.SetActive(false);
    }
}
