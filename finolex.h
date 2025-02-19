#ifndef FINOLEX_H
#define FINOLEX_H

#include "wire.h"

class Finolex:public Wire
{
public:
    Finolex();
    ~Finolex();
    void connected() override;
};

#endif // FINOLEX_H
