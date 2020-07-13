//
// Created by artem on 13.07.2020.
//

#include "AnimationEntity.h"

AnimationEntity::AnimationEntity(float loopDuration): m_loopDuration{ loopDuration }
{
    m_animationTimer.restart();
}

AnimationEntity::~AnimationEntity()
{

}

sf::IntRect AnimationEntity::getCurrentFrameRect() { return sf::IntRect(); }

void AnimationEntity::setCurrentFrameRect(sf::IntRect &frameRect) { m_currentFrameRect = frameRect; }

void AnimationEntity::setNewTileSet(sf::Texture &tileSet) { m_tileSet =  tileSet; }

void AnimationEntity::updateAnimation()
{
    if (m_animationTimer.getElapsedTime().asSeconds() >= m_loopDuration)
    {
        // TODO: Change animation on moving and idle.

    }
}



