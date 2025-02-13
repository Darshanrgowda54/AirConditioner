#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"

class Switch
{
public:
    Wire *wire;

    Switch();
    ~Switch();

    void init(Wire *w);
    void on();
    void off();
};

#endif // SWITCH_H
