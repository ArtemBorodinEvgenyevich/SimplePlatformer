//
// Created by artem on 14.07.2020.
//

#include "ObjectEntity.h"
#include <GraphicsStructures.h>


ObjectEntity::ObjectEntity(): m_isMoving{ false }
{

}

ObjectEntity::~ObjectEntity()
{

}

void ObjectEntity::draw(sf::RenderTarget &target)
{
    target.draw(m_objectSprite);
}
