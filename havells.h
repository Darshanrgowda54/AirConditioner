#ifndef HAVELLS_H
#define HAVELLS_H
#include "wire.h"

class Havells:public Wire
{
public:
    Havells();
    ~Havells();
    void connected();
};

#endif // HAVELLS_H
