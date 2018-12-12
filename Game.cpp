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
    score += frame;
}

/**
 * Returns final game score
 * @return
 */
int Game::scoreGame()
{
    return score;
}
