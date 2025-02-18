#include "switch.h"
#include "polycab.h"
#include <iostream>

Switch::Switch()
{
    std::cout<<"Constructor Switch Called"<<std::endl;
}

Switch::~Switch()
{
    std::cout<<"Destructor Switch Called"<<std::endl;
}

void Switch::init(Wire* w)
{
    std::cout<<"init Function Called"<<std::endl;
    this->wire = w;
}

void Switch::on()
{
    std::cout << "Switch is now ON" << std::endl;
    wire->connected();
}

void Switch::on(Polycab* p)
{
    std::cout << "Switch is now ON" << std::endl;
    this->polycab = p;
    std::cout<<"Address :"<<polycab<<std::endl;
    polycab->connected();
}

void Switch::on(Havells* h)
{
    std::cout << "Switch is now ON" << std::endl;
    this->havells = h;
    std::cout<<"Address :"<<havells<<std::endl;
    havells->connected();
}

void Switch::on(Finolex* f)
{
    std::cout << "Switch is now ON" << std::endl;
    this->finolex = f;
    std::cout<<"Address :"<<finolex<<std::endl;
    finolex->connected();
}

void Switch::off()
{
    std::cout << "Switch is now OFF" << std::endl;
}
