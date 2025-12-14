#pragma once
#include <iostream>
#include <graphics.h>

#define MAX_GRID 4 //每行格子数
#define GRID_WIDTH 100 //格子宽度
#define INTERVAL 15 //间隔宽度

enum Color {
    zero = RGB(205, 193, 180),
    TwoTo1 = RGB(238, 228, 218),
    TwoTo2 = RGB(237, 224, 200),
    TwoTo3 = RGB(242, 177, 121),
    TwoTo4 = RGB(245, 149, 99),
    TwoTo5 = RGB(246, 124, 95),
    TwoTo6 = RGB(246, 94, 59),
    TwoTo7 = RGB(242, 177, 121),
    TwoTo8 = RGB(237, 204, 97),
    TwoTo9 = RGB(255, 0, 128),
    TwoTo10 = RGB(145, 0, 72),
    TwoTo11 = RGB(242, 17, 158),
    background = RGB(187, 173, 160),
}; //枚举格子颜色

class Base {
protected:
    int map[MAX_GRID][MAX_GRID] = { 0 };
    POINT pos[MAX_GRID][MAX_GRID] = { 0 };
    bool flag = false;
    Color arr[13] = { zero, TwoTo1, TwoTo2, TwoTo3, TwoTo4, TwoTo5, TwoTo6,
                     TwoTo7, TwoTo8, TwoTo9, TwoTo10, TwoTo11, background };
    int num[12] = { 0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048 };

public:
    virtual void Initialize() = 0;
    virtual void Draw() = 0;
    virtual void Control() = 0;
    virtual void Update() = 0;
    virtual ~Base() {}
};