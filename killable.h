#pragma once

#include "placeable.h"

class Killable : public Placeable {
public:
    int Health {100};
    void Hit(int);
};
