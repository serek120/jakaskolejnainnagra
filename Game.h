#ifndef GAME_H
#define GAME_H

#pragma once
#include "Player.h"
#include "Baseenemy.h"

class Game {
private:
    CPlayer player;
    CBaseEnemy enemy;
public:
    Game();
    void intro();
    void fight();
    void run();

    enum diff {
        difficulty_Easy = 0,
        difficulty_Normal,
        difficulty_Hard
    };

private:

    diff m_eDifficulty;

};

#endif //GAME_H