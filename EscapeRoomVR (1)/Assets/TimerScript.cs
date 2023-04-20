using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TimerScript : MonoBehaviour
{
    public float TimeLeft;
    public TMP_Text Timertxt;
    public AudioSource beep;
    public AudioSource Rumble;
    public AudioSource standardSound;
    public AudioSource goodbyeSound;
    int track = 0;


    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (TimeLeft > 0)
        {
            TimeLeft -= Time.deltaTime;
            updateTimer(TimeLeft);
        }

        if (TimeLeft <= 110 && track == 0)
        {
            StartCoroutine(Fade());
            track += 1;
        }

        if (TimeLeft <= 85 && track == 1)
        {
            goodbyeSound.Play(0);
            Rumble.Play(0);
            track += 1;
        }
    }

    void updateTimer(float currentTime)
    {
        currentTime += 1;

        float minutes = Mathf.FloorToInt(currentTime / 60);
        float seconds = Mathf.FloorToInt(currentTime % 60);
        float checker = seconds % 10;

        if (checker == 0f)
        {
            beep.Play(0);
        }

        Timertxt.text = string.Format("{0:00} : {1:00}", minutes, seconds);
    }

    IEnumerator Fade()
    {
        for(float vol = standardSound.volume; vol >= 0; vol -= .0015f)
        {
            standardSound.volume = vol;
            yield return new WaitForSeconds(.05f);
        }
    }
}
