#include "Draw.h"

void Draw::Render() {
    setbkcolor(background);
    cleardevice();
    for (int i = 0; i < MAX_GRID; i++) {
        for (int j = 0; j < MAX_GRID; j++) {
            for (int k = 0; k < 12; k++) {
                if (map[i][j] == num[k]) {
                    setfillcolor(arr[k]);
                    solidrectangle(pos[i][j].x, pos[i][j].y,
                        pos[i][j].x + GRID_WIDTH, pos[i][j].y + GRID_WIDTH);
                    if (map[i][j] != 0) {
                        char number[5] = " ";
                        settextcolor(RGB(119, 110, 101));
                        settextstyle(50, 0, _T("¿¬Ìå")); 
                        setbkmode(TRANSPARENT);
                        sprintf_s(number, "%d", map[i][j]);
                        int tempx = GRID_WIDTH / 2 - textwidth(number) / 2;
                        int tempy = GRID_WIDTH / 2 - textheight(number) / 2;
                        outtextxy(pos[i][j].x + tempx, pos[i][j].y + tempy, number);
                    }
                }
            }
        }
    }
}