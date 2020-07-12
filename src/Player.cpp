//
// Created by artem on 12.07.2020.
//

#include "Player.h"

Player::Player(): m_texturePath{ "sprites/player_sheet.bmp" }
{
    SetTexture();
    SetSprite();
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
    m_objSprite.setTexture(m_objTexture);
}


// Public
// -----------------------------------------------------
void Player::draw(sf::RenderTarget &target)
{
    target.draw(m_objSprite);
}