//
// Created by artem on 10.07.2020.
//
#include <SFML/Window.hpp>

#ifndef SIMPLEPLATFORMER_GAME_H
#define SIMPLEPLATFORMER_GAME_H


class Game {
private:
    sf::RenderWindow m_window;
    sf::Event m_event;

    void InitWindow();

public:
    Game();

    void runGameCycle();
};


#endif //SIMPLEPLATFORMER_GAME_H
