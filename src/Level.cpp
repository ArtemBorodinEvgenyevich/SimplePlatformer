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

    for(int i = 0; i < pattern.length(); i++){
        if (pattern[i] == 'W'){
            Grid[i] = 1;
        }
        else{
            Grid[i] = 0;
        }

        cout << Grid[i] << endl;
    }
}

Level::~Level()
{

}