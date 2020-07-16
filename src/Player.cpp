//
// Created by artem on 12.07.2020.
//

#include "Player.h"


// TODO: Move some functions to a new "ObjectMovable" class
Player::Player()
    : ObjectEntity{ }, m_animIDLE(m_objectSprite, m_timer, 0.2f, 68, 204),
      m_animRunR(m_objectSprite, m_timer, 0.1f, 68, 272),
      m_animRunL(m_objectSprite, m_timer, 0.1f, 68, 272)
{
    m_objectSprite.setSprite("sprites/player.bmp");

    InitAnimations();

    m_timer.restart();
}

Player::~Player()
{

}


void Player::InitAnimations()
{
	m_animIDLE.setFramePos(sf::Vector2<int>{0, 0});
	m_animRunR.setFramePos(sf::Vector2<int>{0, 68});
	m_animRunL.setFramePos(sf::Vector2<int>{0, 136});
}

/**
 * Overriden ObjectEntity::updateMovement function.
 */
void Player::updateMovement()
{
	//ObjectEntity::updateMovement();
    ObjectEntity::m_isMoving = false;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
	    sf::Thread thread{&AnimationEntity::play, &m_animRunL};
    	m_isMoving = true;
    	thread.launch();
        m_objectSprite.move(-0.68, 0.f);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        sf::Thread thread{&AnimationEntity::play, &m_animRunR};
    	m_isMoving = true;
	    thread.launch();
	    m_objectSprite.move(0.68, 0.f);
    }
    /*
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        m_isMoving = true;
        m_objectSprite.move(0.f, -0.68);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        m_isMoving = true;
        m_objectSprite.move(0.f, 0.68);
    }
     */

    if (!m_isMoving)
    {
	    sf::Thread thread{&AnimationEntity::play, &m_animIDLE};
	    thread.launch();
    }

}

/**
 * Overriden ObjectEntity::update function.
 */
void Player::update() {
    updateMovement();
    ObjectEntity::update();
}
