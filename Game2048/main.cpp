﻿#include"GameBase.h"

int main() {
    // 创建窗口
    initgraph(MAX_GRID * GRID_WIDTH + 5 * INTERVAL,
        MAX_GRID * GRID_WIDTH + 5 * INTERVAL);

    // 创建Game对象
    Game* game = new Game();

    while (true) {
        game->Draw();
        game->Control();
        game->Update();
    }

    delete game;

    getchar();

    return 0;
}