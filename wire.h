#ifndef WIRE_H
#define WIRE_H

class AC;

class Wire
{
public:
    AC* ac;

    Wire();
    virtual ~Wire();
    virtual void connected() = 0;
    void set(AC* ac);
};

#endif // WIRE_H
