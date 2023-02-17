#pragma once

class Placeable {
public:
    int ID, X, Y, Type;
    int Map[20][30];
    Placeable* GetPlaceable();
};
