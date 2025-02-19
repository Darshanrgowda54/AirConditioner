#include "ac.h"
#include "finolex.h"
#include "havells.h"
#include "polycab.h"
#include "switch.h"
#include "wire.h"
#include <iostream>

using namespace std;

enum
{
    POLYCAB = 1,
    FINOLEX,
    HAVELLS,
    EXIT
};

int main()
{
    Wire* wire1;
    // cout<<&wire1<<endl;

    int choice;
    cout<<"Which Brand of Wire to Connect :";
    cout<<" 1.Polycab"<<" 2.Finolex"<<" 3.Havells"<<" 4.Exit"<<endl;
    cin>>choice;

    switch (choice)
    {
    case POLYCAB:
    {
        //cout<<wire1<<endl;
        wire1 = new Polycab;
        //cout<<wire1<<endl;
        // cout<<&wire1<<endl;
        break;
    }
    case FINOLEX:
    {
        wire1 = new Finolex;
        break;
    }
    case HAVELLS:
    {
        wire1 = new Havells;
        break;
    }
    case EXIT:
        exit(false);
    default:
        cout<<"Invalid"<<endl;
        exit(false);
    }

    AC ac1;
    Switch switch1;
    ac1.setwire(wire1);
    //std::cout<<"Address Wire:"<<wire1<<std::endl;
    switch1.init(wire1);
    //std::cout<<"Address Wire:"<<wire1<<std::endl;
    switch1.on();

    delete wire1;
    return 0;
}
