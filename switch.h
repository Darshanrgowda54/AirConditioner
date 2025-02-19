#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"

class Switch
{
private:
    Wire* wire;
public:
    Switch();
    ~Switch();

    void init(Wire* w);
    void on();
    void off();
};

#endif // SWITCH_H
