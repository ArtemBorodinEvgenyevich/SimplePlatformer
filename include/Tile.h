//
// Created by lkora on 13.07.2020.
//

#ifndef SIMPLEPLATFORMER_TILE_H
#define SIMPLEPLATFORMER_TILE_H

#include <SFML/Graphics.hpp>
#include <string>

enum class TileTypes
{
    GROUND,
    SKY
};

class Tile{
private:
    std::string texturePath;
    sf::Texture texture;
    sf::Sprite  sprite;

    int position_x;
    int position_y;

    TileTypes type;

    void SetTexture();
    void SetSprite();

    void UpdateSpritePosition();

public:
    Tile();
    Tile(int x, int y, TileTypes type);
    ~Tile();

    void draw(sf::RenderTarget &target);
    sf::Sprite GetSprite();

    int GetPositionX();
    int GetPositionY();

    int GetSpritePositionX();
    int GetSpritePositionY();
};

#endif //SIMPLEPLATFORMER_TILE_H