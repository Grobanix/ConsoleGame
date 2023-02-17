#include "area.h"

Area::Area(int X, int Y) {
    XSize = X;
    YSize = Y;
    Map = new int*[XSize];
    for (int i{0}; i < XSize; i++) {
        Map[i] = new int[YSize];
    }
}

Area::~Area() {
    for (int i{0}; i < XSize; i++) {
        delete[] Map[i];
    }
    delete[] Map;
    delete[] Objects;
    delete[] Killables;
}

template <class T> void Area::NewObject() {
    Objects[ObjectsCount] = new T;
    ObjectsCount++;
}

template <class T> void Area::NewKillable() {
    Killables[KillablesCount] = new T;
    KillablesCount++;
}

void Area::ToMap () {
    for (int i{0}; i < ObjectsCount; i++) {
        for (int j{0}; j < XSize; j++) {
            for (int k{0}; k < YSize; k++) {
                Map[j][k] = Objects[i].Map[j][k];
            }
        }
    }
    for (int i{0}; i < KillablesCount; i++) {
        for (int j{0}; j < XSize; j++) {
            for (int k{0}; k < YSize; k++) {
                Map[j][k] = Killables[i].Map[j][k];
            }
        }
    }
}
