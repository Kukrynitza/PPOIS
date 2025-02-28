#pragma once
#include "Cloth.h"
#include "Electronics.h"

class Wearable : public virtual Cloth, public virtual Electronics {
protected:
    bool sensor = true;
    string color = "�����";
public:
    bool hasSensor();
    string getColor();
};
