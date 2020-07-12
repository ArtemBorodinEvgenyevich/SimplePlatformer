//
// Created by artem on 12.07.2020.
//

#ifndef SIMPLEPLATFORMER_PLAYER_H
#define SIMPLEPLATFORMER_PLAYER_H

#include <string>
#include <SFML/Graphics.hpp>

class Player {
private:
    std::string m_texturePath;
    sf::Texture m_objTexture;
    sf::Sprite  m_objSprite;

    void SetTexture();
    void SetSprite();

public:
    Player();
    ~Player();

    void draw(sf::RenderTarget &target);
};


#endif //SIMPLEPLATFORMER_PLAYER_H
