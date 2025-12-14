#pragma once
#include "GridGame.h"

class Control : virtual public GridGame {
public:
    Control() {}
    virtual ~Control() {}
    virtual void HandleInput() = 0;
};