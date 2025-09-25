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
};

#endif //GAME_H