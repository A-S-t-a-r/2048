#include "Game.h"
#include <conio.h>

void Game::HandleInput() {
    char key = _getch();
    switch (key) {
    case 'w': case 'W': case 72:
        moveup();  // 调用从Move类继承的方法
        break;
    case 's': case 'S': case 80:
        movedown();
        break;
    case 'a': case 'A': case 75:
        moveleft();
        break;
    case 'd': case 'D': case 77:
        moveright();
        break;
    }
}