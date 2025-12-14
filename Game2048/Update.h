#pragma once
#include "GridGame.h"

class Update : virtual public GridGame {
public:
    Update() {}
    virtual ~Update() {}
    void ProcessUpdate();
};