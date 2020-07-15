//
// Created by artem on 13.07.2020.
//

#include "AnimationEntity.h"


AnimationEntity::AnimationEntity(ObjectSprite& sprite, sf::Clock& animationTimer,
                                 float playingDuration, float frameShift, float frameShiftLimit)
    : m_sprite{ sprite }, m_animationTimer{ animationTimer }, m_frameShift{ frameShift },
    m_frameShiftLimit{ frameShiftLimit }, m_playingDuration{ playingDuration },
    m_spriteFrame{ sprite.getSpriteFrame() }, m_defaultFramePosition{ getFramePos() }
{

}

AnimationEntity::~AnimationEntity()
{

}

void AnimationEntity::play()
{
	if (m_animationTimer.getElapsedTime().asSeconds() >= m_playingDuration)
    {
        m_spriteFrame.left += m_frameShift;
        if (m_spriteFrame.left >= m_frameShiftLimit)
            m_spriteFrame.left = m_defaultFramePosition.x;

        m_sprite.setSpriteFrame(m_spriteFrame);
        m_animationTimer.restart();
    }
}

// TODO: Simplify m_defaultFramePosition assignment?
void AnimationEntity::setFramePos(sf::Vector2<int> pos)
{
    m_spriteFrame = sf::IntRect{ pos.x, pos.y, m_spriteFrame.height, m_spriteFrame.width };
    m_defaultFramePosition.x = pos.x;
    m_defaultFramePosition.y = pos.y;
}

sf::Vector2<int> AnimationEntity::getFramePos()
{
    return sf::Vector2<int>{ m_spriteFrame.left, m_spriteFrame.top };
}

void AnimationEntity::setFrameShift(float shift)
{
    m_frameShift = shift;
}

float AnimationEntity::getFrameShift()
{
    return m_frameShift;
}

void AnimationEntity::setFrameShiftLimit(float limit)
{
    m_frameShiftLimit = limit;
}

float AnimationEntity::getFrameShiftLimit() const
{
    return m_frameShiftLimit;
}

void AnimationEntity::setPlayingDuration(float duration)
{
    m_playingDuration = duration;
}

float AnimationEntity::getPlayingDuration() const
{
    return m_playingDuration;
}
