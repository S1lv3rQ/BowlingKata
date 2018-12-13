//
// Created by alexandermillar on 12/12/2018.
//

#include "Game.h"

/**
 * Roll Pins
 * @param frame - Number of pins
 */
void Game::roll(int frame)
{
    rolls[currentRoll] = frame;
    currentRoll++;
    //score += frame;
}

/**
 * Returns final game score
 * @return
 */
int Game::scoreGame()
{
    int score = 0;
    int rollNum = 0;
    // 10 scores per game

    for(int frame = 0; frame < 10; frame++) {
        if (isStrike(rollNum)) // strike
        {
            score += rolls[rollNum] + rolls[rollNum + 1] + rolls[rollNum + 2];
            rollNum += 1;
        } else if (isSpare(rollNum)) // spare
        {
            score += 10 + rolls[rollNum + 2];
            rollNum += 2;
        }
        else
        {
            score += rolls[rollNum] + rolls[rollNum + 1];
            rollNum += 2;
        }
    }
    return score;
}

bool Game::isSpare(int frameIndex)
{
    return ( rolls[frameIndex] + rolls[frameIndex+1] == 10);
}

bool Game::isStrike(int frameIndex)
{
    return ( rolls[frameIndex] == 10);
}

Game::Game(){
    currentRoll = 0;
    rolls.fill(0);
}