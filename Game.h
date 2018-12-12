//
// Created by alexandermillar on 12/12/2018.
//

#ifndef BOWLINGKATA_GAME_H
#define BOWLINGKATA_GAME_H


class Game {
    int score = 0;
    int lastRollInFrame = 0;
    int lastSpare = 0;
public:
    void roll(int i);
    int scoreGame();
};


#endif //BOWLINGKATA_GAME_H
