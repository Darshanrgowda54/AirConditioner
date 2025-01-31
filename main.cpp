#include "ac.h"
#include "switch.h"
#include "wire.h"
#include <iostream>

using namespace std;

int main()
{
    Wire Wire1;
    AC AC1(&Wire1);
    Switch Switch1(&Wire1);
    cout << "Hello World!" << endl;
    return 0;
}
