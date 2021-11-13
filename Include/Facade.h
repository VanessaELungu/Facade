#include <iostream>

#include "Alarm.h"
#include "AC.h"
#include "TV.h"

#ifndef facade_h
#define facade_h

using namespace std;

class Facade 
{
    public:
    void work();
    void home();

    Alarm alarm;
    AC ac;
    TV tv;
};

#endif