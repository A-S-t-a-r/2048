#pragma once
#include "GameBase.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <conio.h>

class GridGame : public Base {
protected:
    int twoOrFour() {
        return (rand() % 10 == 1) ? 4 : 2;
    }

    void CreateNumber() {
        while (true) {
            int x = rand() % MAX_GRID;
            int y = rand() % MAX_GRID;
            if (map[x][y] == 0) {
                map[x][y] = twoOrFour();
                break;
            }
        }
    }//随机生成数

public:
    GridGame() {
        srand(static_cast<unsigned int>(time(nullptr)));
        for (int i = 0; i < MAX_GRID; i++) {
            for (int j = 0; j < MAX_GRID; j++) {
                pos[i][j].x = j * GRID_WIDTH + (j + 1) * INTERVAL;
                pos[i][j].y = i * GRID_WIDTH + (i + 1) * INTERVAL;
            }
        }
    }//构建背景网格

    virtual ~GridGame() {}
};//继承GameBase，实现网格游戏基础功能