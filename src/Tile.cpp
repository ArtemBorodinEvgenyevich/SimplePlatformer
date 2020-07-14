//
// Created by lkora on 13.07.2020.
//

#include "Tile.h"

Tile::Tile(): texturePath{ "sprites/ground2.bmp" }
{
    SetTexture();
    SetSprite();
}

Tile::~Tile()
{

}


// Private
// -----------------------------------------------------
void Tile::SetTexture()
{
    if (!texture.loadFromFile(texturePath))
        exit(1);
}

void Tile::SetSprite()
{
    sprite.setTexture(texture);
}

// Public
// -----------------------------------------------------
void Tile::draw(sf::RenderTarget &target)
{
    target.draw(sprite);
}
