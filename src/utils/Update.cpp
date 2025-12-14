#include "Update.h"

void Update::ProcessUpdate() {
    if (flag) {
        CreateNumber();
        flag = false;
    }
}//实现游戏状态功能更新­
