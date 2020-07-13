//
// Created by artem on 14.07.2020.
//

#include "GraphicsStructures.h"

ObjectSprite::ObjectSprite(std::string tileSheetPath)
    : sf::Sprite{ }, m_spriteSheetPath{tileSheetPath },
      m_tileRect{ 0, 0, 32, 32 }
{
    setSprite();
    setTextureRect(m_tileRect);
}

ObjectSprite::~ObjectSprite()
{

}

void ObjectSprite::setSprite()
{
    if (!m_spriteSheet.loadFromFile(m_spriteSheetPath))
        exit(1);

    setTexture(m_spriteSheet);
}

void ObjectSprite::setSprite(std::string spriteSheetPath)
{
    if (!m_spriteSheet.loadFromFile(m_spriteSheetPath))
        exit(1);

    m_spriteSheetPath = spriteSheetPath;
    setTexture(m_spriteSheet);

}

sf::IntRect ObjectSprite::getTileRect() { return m_tileRect; }

void ObjectSprite::setTileRect(int x, int y, int width, int height) { m_tileRect = sf::IntRect{x, y, width, height};}
