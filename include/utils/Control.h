#pragma once
#include "GridGame.h"

class Control : virtual public GridGame {
public:
    Control() {}
    virtual ~Control() {}
    virtual void HandleInput() = 0;
}; //控制功能类，处理用户输入接口