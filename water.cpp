#include "water.h"

Water::Water(int ID, int X, int Y, int XSize, int YSize) {
    this->ID = ID;
    this->X = X;
    this->Y = Y;
    this->XSize = XSize;
    this->YSize = YSize;
    Type = 1;

    for (int i{X}; i < XSize; i++) {
        for (int j{Y}; j < YSize; j++) {
            Map[i][j] = '~';
        }
    }
}

Water::Water() {
    Water(1, 3, 4, 10, 15);
}
