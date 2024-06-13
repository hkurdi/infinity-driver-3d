using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
public class PauseMenu : MonoBehaviour
{

    public GameObject pauseMenu;
    public Button pauseButton;
    public Button resumeButton;
    public Button quitButton;
    public Button mainMenuButton;

    // Start is called before the first frame update
    void Start()
    {
        pauseMenu.SetActive(false);
        pauseButton.onClick.AddListener(PauseGame);
        resumeButton.onClick.AddListener(ResumeGame);
        quitButton.onClick.AddListener(QuitGame);
        mainMenuButton.onClick.AddListener(GoToMainMenu);
    }

    // Update is called once per frame
    void Update()
    {

        if(Input.GetButtonDown("PauseButton")) {
            if(pauseMenu.activeInHierarchy) {
                ResumeGame();
            } else {
                PauseGame();
            }
        } else if (Input.GetButtonDown("ResumeGame")) {
            ResumeGame();
        } else if (Input.GetButtonDown("BackToMenu")) {
            GoToMainMenu();
        } else if (Input.GetButtonDown("QuitGame")) {
            QuitGame();
        }
    }

    public void PauseGame() {
        pauseMenu.SetActive(true);
        Time.timeScale = 0f;
    }

     public void ResumeGame() {
        pauseMenu.SetActive(false);
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
