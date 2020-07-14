//
// Created by lkora on 14.07.2020.
//

#ifndef SIMPLEPLATFORMER_ENGINE_H
#define SIMPLEPLATFORMER_ENGINE_H

#include "Player.h"

class Engine{
private:
    Player* player;
    sf::RenderTarget* target;
public:
    Engine(Player* player, sf::RenderTarget* target);
    ~Engine();

    void MakeIteration();
};

#endif //SIMPLEPLATFORMER_ENGINE_H
