#ifndef SWITCH_H
#define SWITCH_H
#include "finolex.h"
#include "havells.h"
#include "polycab.h"
#include "wire.h"

class Switch
{
public:
    Wire* wire;
    Polycab* polycab;
    Finolex* finolex;
    Havells* havells;

    Switch();
    ~Switch();

    void init(Wire* w);
    void on();
    void on(Polycab* p);
    void on(Havells* p);
    void on(Finolex* f);
    void off();
};

#endif // SWITCH_H
