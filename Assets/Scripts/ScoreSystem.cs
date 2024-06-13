using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreSystem : MonoBehaviour
{
    [SerializeField] private TMP_Text ScoreText;
    [SerializeField] private float ScoreMultiplier;

    public const string HighScoreKey = "HighScore";
    public const string CurrentScoreKey = "CurrentScore";

    private static bool isDestroyed = false;

    private float score;

    public static void SetIsDestroyed(bool value) {
        isDestroyed = value;
    }

    public void Start() {
        isDestroyed = false;
    }


    private void Update()
    {
        if(!isDestroyed && Time.timeScale != 0) {
            score += Time.fixedDeltaTime * ScoreMultiplier;
            ScoreText.text = Mathf.FloorToInt(score).ToString();
            PlayerPrefs.SetInt(CurrentScoreKey, Mathf.FloorToInt(score)); 
            int currentHighScore = PlayerPrefs.GetInt(HighScoreKey, 0);
            Debug.Log(PlayerPrefs.GetInt(CurrentScoreKey, 0));
            if (score > currentHighScore) {
                Debug.Log("new highscore");
                PlayerPrefs.SetInt(HighScoreKey, Mathf.FloorToInt(score));
            }
        }
    }

    private void OnDestroy() {
        isDestroyed = true;
        int currentHighScore = PlayerPrefs.GetInt(HighScoreKey, 0);
        if (score > currentHighScore) {
            PlayerPrefs.SetInt(HighScoreKey, Mathf.FloorToInt(score));
        }
    }
}
