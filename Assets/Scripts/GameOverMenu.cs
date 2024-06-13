using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using TMPro;

public class GameOverMenu : MonoBehaviour
{
    public Button retryButton;
    public Button quitButton;
    public Button mainMenuButton;

    [SerializeField] private TMP_Text highScoreText;
    [SerializeField] private TMP_Text currentScoreText;


    // Start is called before the first frame update
    void Start()
    {
        retryButton.onClick.AddListener(RetryGame);
        quitButton.onClick.AddListener(QuitGame);
        mainMenuButton.onClick.AddListener(GoToMainMenu);
        int highScore = PlayerPrefs.GetInt(ScoreSystem.HighScoreKey, 0);
        highScoreText.text = highScore.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        int currentScore = PlayerPrefs.GetInt(ScoreSystem.CurrentScoreKey, 0);
        currentScoreText.text = currentScore.ToString();
        int highScore = PlayerPrefs.GetInt(ScoreSystem.HighScoreKey, 0);
        highScoreText.text = highScore.ToString();
        
        if (Input.GetButtonDown("ResumeGame")) {
            RetryGame();
        } else if (Input.GetButtonDown("BackToMenu")) {
            GoToMainMenu();
        } else if (Input.GetButtonDown("QuitGame")) {
            QuitGame();
        }
    }

    public void RetryGame() {
        SceneManager.LoadScene("Scene_Game");
        ScoreSystem.SetIsDestroyed(false);
        Time.timeScale = 1f;
    }

    public void GoToMainMenu() {
        Time.timeScale = 0f;
        SceneManager.LoadScene("Scene_MainMenu");
    }

    public void QuitGame() {
        Application.Quit();
    }
}
