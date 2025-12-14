#include "Update.h"

void Update::ProcessUpdate() {
    if (flag) {
        CreateNumber();
        flag = false;
    }
}