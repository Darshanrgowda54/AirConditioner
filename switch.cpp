#include "switch.h"
#include <iostream>

Switch::Switch(Wire *wire)
{
    std::cout<<"Constructor Switch Called"<<std::endl;
    m_wire = wire;
}


Switch::~Switch()
{
    std::cout<<"Destructor Switch Called"<<std::endl;
}

