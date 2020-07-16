//
// Created by lkora on 16.07.2020.
//

#ifndef SIMPLEPLATFORMER_LEVEL_H
#define SIMPLEPLATFORMER_LEVEL_H

#include <string>

class Level {
private:
    std::string pattern;
    int Width;
    int Height;
    int GridLength;
    //Array 3x3
    //[0][1][2][3][4][5][6][7][8]
    //0, 1, 2 <- first layer
    int Grid[];
public:
    Level(int width, int height);
    ~Level();
};


#endif //SIMPLEPLATFORMER_LEVEL_H
