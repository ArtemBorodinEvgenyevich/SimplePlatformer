//
// Created by artem on 14.07.2020.
//

#ifndef SIMPLEPLATFORMER_OBJECTENTITY_H
#define SIMPLEPLATFORMER_OBJECTENTITY_H

#include <GraphicsStructures.h>
#include <SFML/Graphics.hpp>


class ObjectEntity {
public:
    bool m_isMoving;
    ObjectSprite m_objectSprite;

    ObjectEntity();
    ~ObjectEntity();

    virtual void draw(sf::RenderTarget &target);
    virtual void update() {};
    virtual void updateMovement() {};
};


#endif //SIMPLEPLATFORMER_OBJECTENTITY_H
