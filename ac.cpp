#include "ac.h"
#include <iostream>

AC::AC(Wire *wire)
{
    std::cout<<"Constructor AC Called"<<std::endl;
    m_wire = wire;
}

AC::~AC()
{
    std::cout<<"Destructor AC Called"<<std::endl;
}
