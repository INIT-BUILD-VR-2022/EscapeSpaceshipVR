using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeSceneToMainPlay : MonoBehaviour
{
    public void LoadScene(string Models)
    {
        SceneManager.LoadScene(Models);
    }

}
