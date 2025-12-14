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
};//移动功能类，处理方块移动逻辑
