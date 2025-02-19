#ifndef HAVELLS_H
#define HAVELLS_H
#include "wire.h"

class Havells:public Wire
{
public:
    Havells();
    ~Havells();
    void connected() override;
};

#endif // HAVELLS_H
