#ifndef AC_H
#define AC_H
#include "wire.h"

class AC
{
private:
    Wire* wire;
public:
    AC();
    ~AC();

    void setwire(Wire* w);
    void on();
    void off();
};

#endif // AC_H
