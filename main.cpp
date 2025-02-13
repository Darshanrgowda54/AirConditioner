#include "ac.h"
#include "switch.h"
#include "wire.h"
#include <iostream>

using namespace std;

int main()
{
    Wire Wire1;
    AC AC1;
    Switch Switch1;
    Switch1.init(&Wire1);
    AC1.setwire(&Wire1);
    Switch1.on();

    cout << "Hello World!" << endl;
    return 0;
}
