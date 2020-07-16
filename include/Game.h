//
// Created by artem on 10.07.2020.
//

#ifndef SIMPLEPLATFORMER_GAME_H
#define SIMPLEPLATFORMER_GAME_H

#include <SFML/Window.hpp>
#include <Player.h>
#include <Tile.h>
#include <Engine.h>
#include <Level.h>


class Game {
private:
    sf::RenderWindow m_window;
    sf::Event m_event;
    Player player;
    Tile tile{};
    Engine engine;
    Level level;

    void InitWindow();

public:
    Game();
    ~Game();

    void runGameCycle();
};


#endif //SIMPLEPLATFORMER_GAME_H
