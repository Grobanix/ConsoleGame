#pragma once

#include "object.h"
#include "killable.h"

class Area {
public:
    int** Map;
    int XSize, YSize;
    Object* Objects;
    int ObjectsCount{0};
    Killable* Killables;
    int KillablesCount{0};
    void ToMap();
    Area(int, int);
    ~Area();
};
