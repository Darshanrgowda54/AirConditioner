#include "polycab.h"
#include "ac.h"
#include <iostream>

Polycab::Polycab()
{
    std::cout<<"Polycab Constructor Called"<<std::endl;
}

Polycab::~Polycab()
{
    std::cout<<"Polycab Destructor Called"<<std::endl;
}

void Polycab::connected()
{
    std::cout<<"Polycab Wire Connected To Switch"<<std::endl;
    ac->on();
}
