using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.UI;

public class ShowMissions : MonoBehaviour
{
    public Missions mission1;
    public Missions mission2;
    public Missions missionToFinish;

    public bool showText;
    public Animator animator;

    public Text title;
    public Text description;

    private void Start() 
    {
        title.text = "";
        description.text = "";
    }

    private void Update() 
    {
        if (showText)
        {
            title.text = missionToFinish.title;
            description.text = missionToFinish.description;
            missionToFinish.activate = true;
        }
        else
        {
            title.text = "";
            description.text = "";
        }
        if (missionToFinish.finish)
        {
            StartCoroutine(SwitchMission());
        }
    }

    public IEnumerator SwitchMission()
    {
        animator.SetTrigger("Finish");
        showText = false;
        missionToFinish = mission2;
        MainMenu.instance.data.mission1InProgress = mission2;
        yield return new WaitForSeconds(7.4f);
        animator.ResetTrigger("Finish");
    }
}
