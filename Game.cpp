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
    if(lastRollInFrame == 0)
        lastRollInFrame = frame;
        score += frame;

    if(lastRollInFrame != 0)
    {
        if(frame + lastRollInFrame == 10){ //logic pending
            lastSpare = lastRollInFrame + frame;
            score = lastSpare;
        }
        lastRollInFrame = 0;
    }
}

/**
 * Returns final game score
 * @return
 */
int Game::scoreGame()
{
    return score;
}
