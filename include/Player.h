//
// Created by artem on 12.07.2020.
//

#ifndef SIMPLEPLATFORMER_PLAYER_H
#define SIMPLEPLATFORMER_PLAYER_H

#include <string>
#include <SFML/Graphics.hpp>
#include <AnimationEntity.h>
#include <ObjectEntity.h>


class Player: public ObjectEntity
{
private:
    sf::Clock m_timer;
    AnimationEntity m_animIDLE;
    AnimationEntity m_animRunR;
    AnimationEntity m_animRunL;

	void InitAnimations();

public:
	Player();

    ~Player();
    void updateMovement() override;
    void update() override;
};


#endif //SIMPLEPLATFORMER_PLAYER_H
