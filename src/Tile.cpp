//
// Created by lkora on 13.07.2020.
//

#include "Tile.h"

Tile::Tile()
{
    Tile::texturePath = "sprites/ground2.bmp";
    SetTexture();
    SetSprite();

    position_x = 0;
    position_y = 0;

    type = TileTypes{TileTypes::GROUND};
}

Tile::Tile(int x, int y, TileTypes type)
{
    Tile::type = type;

    if(type == TileTypes::SKY)
        Tile::texturePath = "sprites/sky.bmp";
    else
        Tile::texturePath = "sprites/ground2.bmp";

    SetTexture();
    SetSprite();

    position_x = x;
    position_y = y;

    UpdateSpritePosition();
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

void Tile::UpdateSpritePosition()
{
    sprite.setPosition((float)position_x, (float)position_y);
}

sf::Sprite Tile::GetSprite()
{
    return sprite;
}

int Tile::GetPositionX()
{
    return position_x;
}

int Tile::GetPositionY()
{
    return position_y;
}

int Tile::GetSpritePositionX()
{
    return sprite.getPosition().x;
}

int Tile::GetSpritePositionY()
{
    return sprite.getPosition().y;
}