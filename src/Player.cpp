//
// Created by artem on 12.07.2020.
//

//#include <pbt.h>
#include "Player.h"


Player::Player()
    : m_isMoving{ false }, m_texturePath{ "sprites/player_sheet.bmp" },
      m_spriteFrame{ 0, 0, 68, 68 }
{
    SetTexture();
    SetSprite();

    m_animationTimer.restart();
}

Player::~Player()
{

}


// Private
// -----------------------------------------------------
void Player::SetTexture()
{
    if (!m_objTexture.loadFromFile(m_texturePath))
        exit(1);
}

void Player::SetSprite()
{
    m_objSprite.setTextureRect(m_spriteFrame);
    m_objSprite.setTexture(m_objTexture);
}

void Player::UpdateMovement()
{
    m_isMoving = false;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        m_isMoving = true;
        m_objSprite.move(-0.68, 0.f);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        m_isMoving = true;
        m_objSprite.move(0.68, 0.f);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        m_isMoving = true;
        m_objSprite.move(0.f, -0.68);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        m_isMoving = true;
        m_objSprite.move(0.f, 0.68);
    }
}

void Player::UpdateAnimation()
{

    if (m_animationTimer.getElapsedTime().asSeconds() >= 0.5f)
    {
        if (!m_isMoving)
        {
            m_spriteFrame.left += 68.f;
            if (m_spriteFrame.left >= 136)
                m_spriteFrame.left = 0;
        }

        m_objSprite.setTextureRect(m_spriteFrame);
        m_animationTimer.restart();
    }

}

// Public
// -----------------------------------------------------
void Player::draw(sf::RenderTarget &target)
{
    target.draw(m_objSprite);
}

void Player::update()
{
    UpdateMovement();
    UpdateAnimation();
}