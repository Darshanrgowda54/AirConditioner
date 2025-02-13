#include "wire.h"
#include "ac.h"
#include <iostream>

Wire::Wire()
{
    std::cout<<"Constructor Wire Called"<<std::endl;
}

Wire::~Wire()
{
    std::cout<<"Destructor Wire Called"<<std::endl;
}

void Wire::connected()
{
    std::cout<<"Wire Connected To Switch"<<std::endl;
    ac->on();
}

void Wire::set(AC *ac)
{
    std::cout<<"Wire set"<<std::endl;
    this->ac = ac;
}

