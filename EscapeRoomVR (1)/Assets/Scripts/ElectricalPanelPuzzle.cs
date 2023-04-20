using System;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class ElectricalPanelPuzzle : Puzzle
{
    public Light roomLight;
    public GameObject[] LEDLights;
    private bool[] LEDStates;
    public Material LEDOnMat, LEDOffMat;
    public GameObject screen;

    void Awake()
    {
        LEDStates = new bool[2] { false, false };
    }
    public void LitLED(int idx)
    {
        Debug.Log("turn on: "+ LEDLights[idx].name);
        LEDLights[idx].GetComponent<MeshRenderer>().material = LEDOnMat;
        LEDLights[idx].GetComponentInChildren<Light>().enabled = true;
        LEDStates[idx] = true;
        Debug.Log(LEDStates[0] + " " + LEDStates[1]);
        CheckAllLEDOn();
    }
    public void UnlitLED(int idx)
    {
        Debug.Log("turn off: " + LEDLights[idx].name);
        LEDLights[idx].GetComponent<MeshRenderer>().material = LEDOffMat;
        LEDLights[idx].GetComponentInChildren<Light>().enabled = false;
        LEDStates[idx] = false;
        Debug.Log(LEDStates[0] + " " + LEDStates[1]);
        CheckAllLEDOn();
    }
    void CheckAllLEDOn()
    {
        if (LEDStates[0] && LEDStates[1])
        {
            Debug.Log("turn on room light");
            roomLight.enabled = true;
            this.Solve();
            screen.SetActive(true);
        } else
        {
            Debug.Log("turn off room light");
            roomLight.enabled = false;
            screen.SetActive(false);
        }
    }
}
