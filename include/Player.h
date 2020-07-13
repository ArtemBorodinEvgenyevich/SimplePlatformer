//
// Created by artem on 12.07.2020.
//

#ifndef SIMPLEPLATFORMER_PLAYER_H
#define SIMPLEPLATFORMER_PLAYER_H

#include <string>
#include <SFML/Graphics.hpp>
#include <AnimationEntity.h>


class Player {
private:
    bool m_isMoving;
    std::string m_texturePath;
    sf::Texture m_objTexture;
    sf::Sprite  m_objSprite;
    sf::IntRect m_spriteFrame;
    sf::Clock m_animationTimer;

    void SetTexture();
    void SetSprite();
    void UpdateMovement();
    void UpdateAnimation();

public:
    Player();
    ~Player();

    void draw(sf::RenderTarget &target);
    void update();
};


#endif //SIMPLEPLATFORMER_PLAYER_H
