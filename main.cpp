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
    Wire Wire1;
    AC AC1;
    Switch Switch1;
    Polycab polycab1;
    Finolex finolex1;
    Havells havells1;
    // Switch1.init(&Wire1);
    // AC1.setwire(&Wire1);
    // Switch1.on();

    int choice;
    cout<<"Which Brand of Wire to Connect :";
    cout<<" 1.Polycab"<<" 2.Finolex"<<" 3.Havells"<<" 4.Exit"<<endl;
    cin>>choice;

    switch (choice)
    {
    case POLYCAB:
    {
        AC1.setwire(&polycab1);
        Switch1.on(&polycab1);
        break;
    }
    case FINOLEX:
    {
        AC1.setwire(&finolex1);
        Switch1.on(&finolex1);
        break;
    }
    case HAVELLS:
    {
        AC1.setwire(&havells1);
        Switch1.on(&havells1);
        break;
    }
    case EXIT:
        break;
    default:
        cout<<"Invalid"<<endl;
        break;
    }
    return 0;
}
