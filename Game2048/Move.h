#pragma once
#include "GridGame.h"

class Move : virtual public GridGame {
protected:
    void moveup();
    void movedown();
    void moveleft();
    void moveright();

public:
    Move() {}
    virtual ~Move() {}
};
