#pragma once
#include "GridGame.h"

class Update : virtual public GridGame {
public:
    Update() {}
    virtual ~Update() {}
    void ProcessUpdate();
};//更新功能类，管理游戏状态更新