#pragma once
#include "Ñurrency.h"

class Pound final :public Ñurrency
{

public:
    static double kurse;
    Pound() = default;
    ~Pound() {}
    double toRub(double x) override;
    void show(double x)const override;
};

