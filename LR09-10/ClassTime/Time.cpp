#include "Time.h"
#include <iostream>

Time::Time() { hour = minute = second = 0; }

//Обнуление неверных значений.
void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

//Печать времени в военном формате
void Time::printMilitary()
{
    std::cout << (hour < 1 ? "0" : "") << hour << ":" << (minute < 1 ? "0" : "") << minute <<
        ":" << (second < 1 ? "0" : "") << second;
}

//Печать времени в стандартном формате
void Time::printStandard()
{
    std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << (minute < 1 ? "0"
        : "") << minute << ":" << (second < 1 ? "0" : "") << second << (hour < 12 ? "AM" : " PM");
}
