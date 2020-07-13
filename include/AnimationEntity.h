//
// Created by artem on 13.07.2020.
//

#ifndef SIMPLEPLATFORMER_ANIMATIONENTITY_H
#define SIMPLEPLATFORMER_ANIMATIONENTITY_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class AnimationEntity
{
private:
    float m_loopDuration;
    sf::Clock m_animationTimer;
    sf::IntRect m_currentFrameRect;
    sf::Texture m_tileSet;


public:
    AnimationEntity(float loopDuration=0.5f);
    ~AnimationEntity();

    sf::IntRect getCurrentFrameRect();
    void setCurrentFrameRect(sf::IntRect &frameRect);
    void setNewTileSet(sf::Texture &tileSet);
    void updateAnimation();

    // TODO: Make class a friend class of ObjectEntity!!
    // TODO: Get access to isMoving variable to control animation.
    //friend bool checkIsMoving();
};


#endif //SIMPLEPLATFORMER_ANIMATIONENTITY_H
