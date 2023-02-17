#pragma once

#include "area.h"
#include "water.h"
#include "engine.h"

void Lake() {
    Area Lake(20, 40);
    Lake.NewObject<Water>();

    Engine::Print(&Lake);
}
