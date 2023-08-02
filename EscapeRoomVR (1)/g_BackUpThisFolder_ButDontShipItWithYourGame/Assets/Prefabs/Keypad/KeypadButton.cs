using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class KeypadButton : MonoBehaviour
{
    private GameObject[] buttons;
    // Start is called before the first frame update
    void Start()
    {
        buttons = GameObject.FindGameObjectsWithTag("KeypadButton");
    }

    void OnTriggerEnter()
    {
        foreach (GameObject b in buttons)
        {
            b.GetComponent<Collider>().enabled = false;
        }
        StartCoroutine(DisableOtherCollidersForSeconds());
    }

    IEnumerator DisableOtherCollidersForSeconds()
    {
        yield return new WaitForSecondsRealtime(0);
        gameObject.GetComponent<Button>().onClick.Invoke();
        yield return new WaitForSecondsRealtime(0.8f);
        foreach (GameObject b in buttons)
        {
            b.GetComponent<Collider>().enabled = true;
        }
    }
}
