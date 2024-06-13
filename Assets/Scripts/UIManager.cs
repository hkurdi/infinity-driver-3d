using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public GameObject gameOverMenu;

    private void OnEnable() {
        // Debug.Log("UIManager enabled");
        Car.ObstacleTouched += EnableGameOverMenu;
    }
    private void OnDisable() {
        Car.ObstacleTouched -= EnableGameOverMenu;        
    }
    public void EnableGameOverMenu()
    {
        gameOverMenu.SetActive(true);
        ScoreSystem.SetIsDestroyed(true);
    }
}
