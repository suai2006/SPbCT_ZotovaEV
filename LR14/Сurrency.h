#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <string.h>
using namespace std;

class �urrency
{
public:
    virtual double toRub(double x) = 0;
    virtual void show(double x) const = 0;
    virtual ~�urrency() {}    
};

