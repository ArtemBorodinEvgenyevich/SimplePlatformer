//
// Created by artem on 14.07.2020.
//

#ifndef SIMPLEPLATFORMER_GRAPHICSSTRUCTURES_H
#define SIMPLEPLATFORMER_GRAPHICSSTRUCTURES_H

#include <string>
# include <SFML/Graphics.hpp>


class ObjectSprite: public sf::Sprite
{
private:
    std::string m_spriteSheetPath;
    sf::Texture m_spriteSheet;
    sf::IntRect m_tileFrame;

public:
    ObjectSprite(std::string tileSheetPath="sprites/no_tile.bmp");
    ~ObjectSprite();

    void setSprite(std::string spriteSheetPath);
    sf::IntRect getSpriteFrame();
    void setSpriteFrame(int x, int y, int width, int height);
    void setSpriteFrame(sf::IntRect spriteFrame);

};

#endif //SIMPLEPLATFORMER_GRAPHICSSTRUCTURES_H
