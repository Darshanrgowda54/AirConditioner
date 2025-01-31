#ifndef AC_H
#define AC_H
#include "wire.h"

class AC
{
public:
    Wire* m_wire;
    AC(Wire* wire);
    ~AC();
};

#endif // AC_H
