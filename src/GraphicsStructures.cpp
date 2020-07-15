//
// Created by artem on 14.07.2020.
//

#include "GraphicsStructures.h"


// ObjectSprite
// ---------------------------------------------------------------------------------------------------------------------

ObjectSprite::ObjectSprite(std::string tileSheetPath)
    : sf::Sprite{ }, m_spriteSheetPath{ tileSheetPath },
      m_tileFrame{0, 0, 68, 68 }
{
    setSpriteFrame(m_tileFrame);
}

ObjectSprite::~ObjectSprite()
{

}


/**
* Load spritesheet from file to sf::Texture, set it to sprite and update current sprite filepath.
*/
void ObjectSprite::setSprite(std::string spriteSheetPath)
{
    if (!m_spriteSheet.loadFromFile(spriteSheetPath))
        exit(1);

    setTexture(m_spriteSheet);
    m_spriteSheetPath = spriteSheetPath;

}

/**
 * Get sprite's current tile frame.
 * @return sf::IntRect instance.
 */
sf::IntRect ObjectSprite::getSpriteFrame() { return m_tileFrame; }

/**
 * Set new tile frame and assign to sprite.
 * @param x
 * @param y
 * @param width
 * @param height
 */
void ObjectSprite::setSpriteFrame(int x, int y, int width, int height)
{
    m_tileFrame = sf::IntRect{x, y, width, height};
    setTextureRect(m_tileFrame);
}

/**
 * Set new tile frame and assign to sprite.
 * @param spriteFrame
 */
void ObjectSprite::setSpriteFrame(sf::IntRect spriteFrame)
{
    setTextureRect(spriteFrame);
}

// ---------------------------------------------------------------------------------------------------------------------
