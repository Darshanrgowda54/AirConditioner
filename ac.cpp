#include "ac.h"
#include <iostream>

AC::AC()
{
    std::cout<<"Constructor AC Called"<<std::endl;
}

AC::~AC()
{
    std::cout<<"Destructor AC Called"<<std::endl;
}

void AC::setwire(Wire *w)
{
    std::cout<<"Setwire Function Called"<<std::endl;
    wire = w;
    w->set(this);
}

void AC::on()
{
    std::cout << "AC is now ON" << std::endl;
}

void AC::off()
{
    std::cout << "AC is now OFF" << std::endl;
}
