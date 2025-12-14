#pragma once
#include "Move.h"
#include "Draw.h"
#include "Update.h"
#include "Control.h"
#include <iostream>

class Game : public Move, public Draw, public Update, public Control 
    //主游戏类，整合所有功能模块
{
public:
    Game() {
        // 初始化两次数字
        CreateNumber();
        CreateNumber();
    }

    ~Game() override {}

    // 实现GameBase的纯虚函数
    void Initialize() override {}

    void Draw() override {
        Render();  // 调用Draw类的Render方法
    }

    void Control() override {
        HandleInput();  // 调用HandleInput方法
    }

    void Update() override {
        ProcessUpdate();  // 调用Update类的ProcessUpdate方法
    }

    // 实现Control类的纯虚函数HandleInput
    void HandleInput() override;
};