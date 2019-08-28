using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{
    public GameObject hazard;
    public Vector3 spawnValues;
    public int hazardCount;
    public float spawnWait;
    public float startWait;
    public float waveWait;
    public Text scoreText;
    public Text waveText;
    public Text restartText;
    public Text gameOverText;
    public Text waveFlashText;
    public Text lifeText;
    public Text endScoreText;
    private int score;
    private int wave;
    int wave2;
    public int lifeCount;
    private bool gameOver;
    private bool restart;

    void Start()
    {
        score = 0;
        wave = 1;
        wave2 = 0;
        lifeCount = 3;
        updateScore();
        updateWave();
        updateLives();
        StartCoroutine (SpawnWaves());
        gameOver = false;
        restart = false;
        restartText.text = "";
        gameOverText.text = "";
        waveFlashText.text = "";
        endScoreText.text = "";
    }
	
    void Update()
    {
        if (restart)
        {
            if (Input.GetKeyDown (KeyCode.R))
            {
                Application.LoadLevel(Application.loadedLevel);
            }
        }
    }
    IEnumerator SpawnWaves()
    {
        while (true)
        {
            waveFlashText.text = "";
            for (int i = 0; i < hazardCount; i++)
            {
                yield return new WaitForSeconds(startWait);
                Vector3 spawnPosition = new Vector3(Random.Range(-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
                Quaternion spawnRotation = Quaternion.identity;
                Instantiate(hazard, spawnPosition, spawnRotation);
                yield return new WaitForSeconds(spawnWait);
                if (gameOver)
                {
                    restartText.text = "Press 'R' to restart";
                    restart = true;
                    break;
                }
            }
            if (gameOver)
            {
                break;
            }
            yield return new WaitForSeconds(waveWait);
            addWave();
            yield return new WaitForSeconds(waveWait);
            if (wave2 > 1)
            {
                spawnWait = spawnWait / 2;
                wave2 = 0;
            }
        }
    }

    void updateScore()
    {
        scoreText.text = "Score: " + score;
    }

    void updateWave()
    {
        waveText.text = "Wave : " + wave;
        waveFlashText.text = "Wave " + wave;
    }

    public void updateLives()
    {
        lifeText.text = "Lives: " + lifeCount;
    }

    public void loseLife()
    {
        lifeCount--;
    }

    public void AddScore(int NewScoreValue)
    {
        score += NewScoreValue;
        updateScore();
    }

    public void GameOver()
    {
        gameOverText.text = "Game over";
        endScoreText.text = "Your score: " + score;
        gameOver = true;
    }
    public void addWave()
    {
        wave++;
        wave2++;
        hazardCount++;
        updateWave();
    }
}
