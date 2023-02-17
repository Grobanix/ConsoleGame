#include "engine.h"
#include "stdio.h"

void Engine::Update() {
    Input();
    //Print();
}

void Engine::Print(Area* area) {
    for (int i{0}; i < area->XSize; i++) {
        for (int j{0}; j < area->YSize; j++) {
            printf("%c", area->Map[i][j]);
        }
    }
}

void Engine::Input() {
    
}
