//
// Created by lkora on 16.07.2020.
//

#include "Level.h"
#include <iostream>

using namespace std;

Level::Level(int width, int height)
{
    Width = width;
    Height = height;
    GridLength = Width * Height;
    Grid[GridLength];

    pattern = "WWWW WWWW";

    int x = 0;
    int y = 0;

    for(int i = 0; i < pattern.length(); i++){
        x = (i % Width) * 68;

        Grid[i] = new Tile(x, y);

        if(x == 68 * (Width - 1))
            y += 68;
    }
}

Level::~Level()
{

}

void Level::draw(sf::RenderTarget &target)
{
    for(int i = 0; i < GridLength; i++)
    {
        target.draw(Grid[i]->GetSprite());
    }
}