#pragma once
#include "�urrency.h"

class Pound final :public �urrency
{

public:
    static double kurse;
    Pound() = default;
    ~Pound() {}
    double toRub(double x) override;
    void show(double x)const override;
};

