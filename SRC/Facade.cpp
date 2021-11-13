#include <iostream>

#include "Facade.h"

using namespace std;

void Facade::work()
{
    alarm.alarm_on();
    ac.ac_off();
    tv.tv_off();
}

void Facade::home()
{
    alarm.alarm_on();
    ac.ac_on();
    tv.tv_on();
}