#pragma once
#include "Spice.h"
class Pepper : virtual public Spice {
public:
    Pepper() : Spice("�����") {}

    string getSpice();
};
