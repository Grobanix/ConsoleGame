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
}

void Area::ToMap () {
    for (int i{0}; i < ObjectsCount; i++) {
        Map[Objects[i].X][Objects[i].Y] = Objects[i].ID;
    }
    for (int i{0}; i < KillablesCount; i++) {
        Map[Killables[i].X][Killables[i].Y] = Killables[i].ID;
    }
}
