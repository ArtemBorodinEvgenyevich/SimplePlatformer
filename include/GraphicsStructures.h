//
// Created by artem on 14.07.2020.
//

#ifndef SIMPLEPLATFORMER_GRAPHICSSTRUCTURES_H
#define SIMPLEPLATFORMER_GRAPHICSSTRUCTURES_H

#include <string>
# include <SFML/Graphics.hpp>


class ObjectSprite: protected sf::Sprite
{
private:
    std::string m_spriteSheetPath;
    sf::Texture m_spriteSheet;
    sf::IntRect m_tileRect;

public:
    ObjectSprite(std::string tileSheetPath="sprites/no_tile.bmp");
    ~ObjectSprite();

    void setSprite();
    void setSprite(std::string spriteSheetPath);
    sf::IntRect getTileRect();
    void setTileRect(int x, int y, int width, int height);
};


#endif //SIMPLEPLATFORMER_GRAPHICSSTRUCTURES_H
