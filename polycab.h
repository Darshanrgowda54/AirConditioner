#ifndef POLYCAB_H
#define POLYCAB_H
#include "wire.h"

class Polycab:public Wire
{
public:
    Polycab();
    ~Polycab();
    void connected();
};

#endif // POLYCAB_H
