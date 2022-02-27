#pragma once

class Time
{

public:
    Time();
    void setTime(int, int, int);
    void printMilitary();
    void printStandard();

private:
    int hour;//0-23
    int minute;//0-59
    int second;//0-59
};