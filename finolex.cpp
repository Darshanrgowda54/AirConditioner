#include "finolex.h"
#include "ac.h"
#include <iostream>

Finolex::Finolex()
{
    std::cout<<"Finolex Constructor Called"<<std::endl;
}

Finolex::~Finolex()
{
    std::cout<<"Finolex Destructor Called"<<std::endl;
}


void Finolex::connected()
{
    std::cout<<"Finolex Wire Connected To Switch"<<std::endl;
    ac->on();
}

