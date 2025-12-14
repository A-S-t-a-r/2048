#include "Move.h"
#include<iostream>

void Move::moveup() {
    for (int i = 0; i < MAX_GRID; i++) {
        int temp = 0;
        for (int begin = 1; begin < MAX_GRID; begin++) {
            if (map[begin][i] != 0) {
                if (map[temp][i] == 0) {
                    map[temp][i] = map[begin][i];
                    map[begin][i] = 0;
                }
                else if (map[temp][i] == map[begin][i]) {
                    map[temp][i] += map[begin][i];
                    map[begin][i] = 0;
                }
                else {
                    map[temp + 1][i] = map[begin][i];
                    if (temp + 1 != begin) {
                        map[begin][i] = 0;
                    }
                }
                temp++;
                flag = true;
            }
        }
    }
    std::cout << "up" << std::endl;
}

void Move::movedown() {
    for (int i = 0; i < MAX_GRID; i++) {
        int temp = MAX_GRID - 1;
        for (int begin = MAX_GRID - 2; begin >= 0; begin--) {
            if (map[begin][i] != 0) {
                if (map[temp][i] == 0) {
                    map[temp][i] = map[begin][i];
                    map[begin][i] = 0;
                }
                else if (map[temp][i] == map[begin][i]) {
                    map[temp][i] += map[begin][i];
                    map[begin][i] = 0;
                    temp--;
                }
                else {
                    if (temp - 1 != begin) {
                        map[temp - 1][i] = map[begin][i];
                        map[begin][i] = 0;
                    }
                    temp--;
                }
                flag = true;
            }
        }
    }
    std::cout << "down" << std::endl;
}

void Move::moveleft() {
    for (int i = 0; i < MAX_GRID; i++) {
        int temp = 0;
        for (int begin = 1; begin < MAX_GRID; begin++) {
            if (map[i][begin] != 0) {
                if (map[i][temp] == 0) {
                    map[i][temp] = map[i][begin];
                    map[i][begin] = 0;
                }
                else if (map[i][temp] == map[i][begin]) {
                    map[i][temp] += map[i][begin];
                    map[i][begin] = 0;
                }
                else {
                    map[i][temp + 1] = map[i][begin];
                    if (temp + 1 != begin) {
                        map[i][begin] = 0;
                    }
                }
                temp++;
                flag = true;
            }
        }
    }
    std::cout << "left" << std::endl;
}

void Move::moveright() {
    for (int i = 0; i < MAX_GRID; i++) {
        int temp = MAX_GRID - 1;
        for (int begin = MAX_GRID - 2; begin >= 0; begin--) {
            if (map[i][begin] != 0) {
                if (map[i][temp] == 0) {
                    map[i][temp] = map[i][begin];
                    map[i][begin] = 0;
                }
                else if (map[i][temp] == map[i][begin]) {
                    map[i][temp] += map[i][begin];
                    map[i][begin] = 0;
                }
                else {
                    map[i][temp - 1] = map[i][begin];
                    if (temp - 1 != begin) {
                        map[i][begin] = 0;
                    }
                }
                temp--;
                flag = true;
            }
        }
    }
    std::cout << "right" << std::endl;
}