//
// Created by artem on 13.07.2020.
//

#ifndef SIMPLEPLATFORMER_ANIMATIONENTITY_H
#define SIMPLEPLATFORMER_ANIMATIONENTITY_H


#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <GraphicsStructures.h>


// TODO: Should we run animation in a thread?
class AnimationEntity
{
private:
    ObjectSprite& m_sprite;
    sf::Clock& m_animationTimer;

    float m_frameShift;
    float m_frameShiftLimit;
    float m_playingDuration;
	sf::IntRect m_spriteFrame;
	sf::Vector2<int> m_defaultFramePosition;

public:
    AnimationEntity(ObjectSprite& sprite, sf::Clock& animationTimer,
                    float playingDuration, float frameShift, float frameShiftLimit);
    ~AnimationEntity();

    void play();

    void setFramePos(sf::Vector2<int> pos);
    sf::Vector2<int> getFramePos();

    void setFrameShift(float shift);
    float getFrameShift();

    void setFrameShiftLimit(float limit);
    float getFrameShiftLimit() const;

    void setPlayingDuration(float duration);
    float getPlayingDuration() const;

};


#endif //SIMPLEPLATFORMER_ANIMATIONENTITY_H
