#include "havells.h"
#include "ac.h"
#include <iostream>

Havells::Havells()
{
    std::cout<<"Havells Constructor Called"<<std::endl;
}

Havells::~Havells()
{
    std::cout<<"Havells Destructor Called"<<std::endl;
}

void Havells::connected()
{
    std::cout<<"Havells Wire Connected To Switch"<<std::endl;
    ac->on();
}
