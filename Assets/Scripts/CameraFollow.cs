using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public GameObject cameraWaypoint;
    public float timeOffset;
    public Vector3 posOffset;

    public Vector3 anPosPlayer;
    private Vector3 velocity;

    public static CameraFollow instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("Il y a plus d'une instance de CameraFollow dans la scene");
            return;
        }

        instance = this;
    }
    void Update()
    {
        if (PlayerMovement.instance.transform.position.x>=-35 && PlayerMovement.instance.transform.position.x<=35)
        {
            posOffset.x = PlayerMovement.instance.transform.position.x;
        }
        if (PlayerMovement.instance.transform.position.x == anPosPlayer.x && PlayerMovement.instance.transform.position.x == transform.position.x)
        {
            transform.position = Vector3.SmoothDamp(transform.position, cameraWaypoint.transform.position + posOffset, ref velocity, 0);
        }
        else
        {
            transform.position = Vector3.SmoothDamp(transform.position, cameraWaypoint.transform.position + posOffset, ref velocity, timeOffset);
            anPosPlayer.x = PlayerMovement.instance.transform.position.x;
        }
    }
}
