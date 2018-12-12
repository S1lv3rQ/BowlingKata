#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Game.h"

TEST_CASE("Does the Game exist","[score]")
{
    //Arrange
    Game *g = new Game;
    bool exists = true;

    //Act

    //Assert
    REQUIRE(g != NULL);

}

TEST_CASE("Gutter Game Returns 0","[score]")
{
    //Arrange
    Game g;
    int pins = 0;

    //Act
    for(int frame = 0; frame < 20; frame++)
    {
        g.roll(pins);
    }

    //Assert
    REQUIRE(0 == g.scoreGame());

}