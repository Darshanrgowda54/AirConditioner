#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"

class Switch
{
public:
    Wire* m_wire;
    Switch(Wire* wire);
    ~Switch();
};

#endif // SWITCH_H
