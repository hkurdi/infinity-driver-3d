using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class Car : MonoBehaviour
{

    [SerializeField] private float speed = 10f;
    [SerializeField] private float speedGain = 0.2f;
    [SerializeField] private float turnSpeed = 200f;

    public static event Action ObstacleTouched;

    
    private int steerVal;
   
    void Update()
    {
        speed += Time.deltaTime * speedGain;
        transform.Rotate(0f, steerVal * turnSpeed * Time.deltaTime, 0f);
        transform.Translate(Vector3.forward * speed * Time.deltaTime);
    }

    private void OnTriggerEnter(Collider other) {
        if(other.CompareTag("Obstacle")) {
            if (ObstacleTouched != null)
            {
                ObstacleTouched.Invoke();
                Time.timeScale = 0f;
            } else {
                Debug.Log("null");
            }
        } else if (other.CompareTag("Portal")) {
            transform.position = Vector3.zero; 
            speed *= 1.15f; 
        }
    }

    public void Steer(int value) {
        steerVal = value;
    }
}
