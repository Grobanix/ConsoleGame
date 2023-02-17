#pragma once

#include "object.h"

class Water : public Object {
public:
    int XSize, YSize;
    Water(int, int, int, int, int);
    Water();
};