//
// Created by lkora on 14.07.2020.
//

#include "Engine.h"

Engine::Engine(Player* player, sf::RenderTarget* target) {
    Engine::player = player;
    Engine::target = target;
}

Engine::~Engine() {

}

void Engine::MakeIteration() {
    player->update();
    player->draw(*target);
}