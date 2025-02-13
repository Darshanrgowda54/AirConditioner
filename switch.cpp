#include "switch.h"
#include <iostream>

Switch::Switch()
{
    std::cout<<"Constructor Switch Called"<<std::endl;
}

Switch::~Switch()
{
    std::cout<<"Destructor Switch Called"<<std::endl;
}

void Switch::init(Wire *w)
{
    std::cout<<"init Function Called"<<std::endl;
    this->wire = w;
}

void Switch::on()
{
    std::cout << "Switch is now ON" << std::endl;
    wire->connected();
}

void Switch::off()
{
    std::cout << "Switch is now OFF" << std::endl;
}
