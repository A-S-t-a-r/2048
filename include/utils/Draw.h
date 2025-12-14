#pragma once
#include "GridGame.h"

class Draw : virtual public GridGame {
public:
    Draw() {}
    virtual ~Draw() {}
    void Render();
};//绘制功能类，负责游戏界面渲染