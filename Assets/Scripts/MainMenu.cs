using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;


public class MainMenu : MonoBehaviour
{
    [SerializeField] private IOSNotifications IOSNotifHandler;

    [SerializeField] private AndroidNotifications AndroidNotifHandler;
    [SerializeField] private TMP_Text highScoreMenuText;

    [SerializeField] private TMP_Text energyText;

    [SerializeField] private int maxEnergy;
    [SerializeField] private int energyRechargeDuration;

    private int energy;
    private const string EnergyKey = "Energy";
    private const string EnergyReadyKey = "EnergyReady";

    // Start is called before the first frame update
    void Start()
    {
        int highScoreMenu = PlayerPrefs.GetInt(ScoreSystem.HighScoreKey, 0);
        highScoreMenuText.text = $"High Score: {highScoreMenu}";
        energy = PlayerPrefs.GetInt(EnergyKey, maxEnergy);
        if (energy == 0) {
            string energyReadyString = PlayerPrefs.GetString(EnergyReadyKey, string.Empty);
            if (energyReadyString == string.Empty) {
                return;
            } 
            DateTime energyReady = DateTime.Parse(energyReadyString);

            if(DateTime.Now > energyReady) {
                energy = maxEnergy;
                PlayerPrefs.SetInt(EnergyKey, energy);
            }
        }

        energyText.text = $"Play [{energy} Lives]";
    }

    public void Play() {
        if (energy < 1) {
                return;
            }   
        Time.timeScale = 1f;
        SceneManager.LoadScene(1);
        energy--;
        PlayerPrefs.SetInt(EnergyKey, energy);
        if(energy == 0) {
        DateTime energyReady = DateTime.Now.AddMinutes(energyRechargeDuration);
        PlayerPrefs.SetString(EnergyReadyKey, energyReady.ToString());
#if UNITY_ANDROID 
        AndroidNotifHandler.ScheduleNotification(energyReady);
#elif UNITY_IOS
        IOSNotifHandler.ScheduleNotification(energyRechargeDuration);
#endif
        }
    }

    public void QuitGame() {
        Application.Quit();
    }
}
