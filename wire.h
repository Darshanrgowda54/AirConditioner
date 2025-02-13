#ifndef WIRE_H
#define WIRE_H

class AC;

class Wire
{
public:
    AC *ac;

    Wire();
    ~Wire();
    void connected();
    void set(AC *ac);
};

#endif // WIRE_H
