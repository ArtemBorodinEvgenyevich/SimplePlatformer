//
// Created by lkora on 13.07.2020.
//

#include "Tile.h"

Tile::Tile()
{
    Tile::texturePath = "sprites/ground2.bmp";
    SetTexture();
    SetSprite();
}

Tile::~Tile()
{

}

void Tile::SetTexture()
{
    if (!texture.loadFromFile(texturePath)) {
        exit(2);
    }
}

void Tile::SetSprite()
{
    sprite.setTexture(texture);
}

void Tile::draw(sf::RenderTarget &target)
{
    target.draw(sprite);
}
