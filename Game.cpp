// Game.cpp
#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game()
    : player("Bohater", 20, 10)
    , enemy("Goblin", 12)
    , m_eDifficulty(difficulty_Normal)
{
    std::srand((unsigned)std::time(nullptr));
}

void Game::intro() {
    char diffBuff[2];
    printf("bochaterze wybierz poziom tudnosci");
    fgets(diffBuff, sizeof(diffBuff), stdin);
    switch (diffBuff[0])
    {
    case '1': m_eDifficulty = difficulty_Easy; break;
    case '2': m_eDifficulty = difficulty_Normal; break;
    case '3': m_eDifficulty = difficulty_Hard; break;
    }


    std::cout << "Wchodzisz do lochu. Przed Toba niebezpieczenstwo...\n";
    player.PrintStats();
    enemy.GetHealth(), enemy.GetName();
}

void Game::fight() {
    int a = 0;



    while (player.BIsAlive() && enemy.BIsAlive()) {
        a++;

        
        int playerDmg = 1 + std::rand() % 6;
        int enemyDmg = 1 + std::rand() % 4;

        std::cout << player.GetName() << " zadaje " << playerDmg << " dmg.\n";
        enemy.TakeDamage(playerDmg);
        enemy.GetHealth();
        if (!enemy.BIsAlive()) break;

        std::cout << enemy.GetName() << " zadaje " << enemyDmg << " dmg.\n";
        player.TakeDamage(enemyDmg);
        player.GetHealth();
    }
    if (player.BIsAlive()) std::cout << "Wygrana!\n"; else std::cout << "Przegrana...\n";
}

void Game::run() {
    intro();
    fight();
}
