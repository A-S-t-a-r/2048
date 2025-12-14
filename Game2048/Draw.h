#pragma once
#include "GridGame.h"

class Draw : virtual public GridGame {
public:
    Draw() {}
    virtual ~Draw() {}
    void Render();
};