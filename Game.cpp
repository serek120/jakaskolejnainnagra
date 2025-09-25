// Game.cpp
#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


Game::Game()
    : player("Bohater", 20, 10)
    , enemy("Goblin", 12)
{
    std::srand((unsigned)std::time(nullptr));
}

void Game::intro() {
    std::cout << "Wchodzisz do lochu. Przed Toba niebezpieczenstwo...\n";
    player.PrintStats();
    enemy.GetHealth(), enemy.GetName();
}

void Game::fight() {
    while (player.BIsAlive() && enemy.BIsAlive()) {
        int playerDmg = 1 + std::rand() % 6;
        int enemyDmg = 1 + std::rand() % 4;

        std::cout << player.getName() << " zadaje " << playerDmg << " dmg.\n";
        enemy.takeDamage(playerDmg);
        enemy.show();
        if (!enemy.isAlive()) break;

        std::cout << enemy.getName() << " zadaje " << enemyDmg << " dmg.\n";
        player.takeDamage(enemyDmg);
        player.showStats();
    }
    if (player.isAlive()) std::cout << "Wygrana!\n"; else std::cout << "Przegrana...\n";
}

void Game::run() {
    intro();
    fight();
}