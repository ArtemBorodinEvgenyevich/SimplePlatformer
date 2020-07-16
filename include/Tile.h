//
// Created by lkora on 13.07.2020.
//

#ifndef SIMPLEPLATFORMER_TILE_H
#define SIMPLEPLATFORMER_TILE_H

#include <SFML/Graphics.hpp>
#include <string>

class Tile{
private:
    std::string texturePath;
    sf::Texture texture;
    sf::Sprite  sprite;

    void SetTexture();
    void SetSprite();

public:
    Tile();
    ~Tile();

    void draw(sf::RenderTarget &target);
};

#endif //SIMPLEPLATFORMER_TILE_H