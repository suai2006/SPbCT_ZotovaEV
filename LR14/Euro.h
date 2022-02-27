#pragma once
#include "Ñurrency.h"

class Euro final :public Ñurrency
{
private:

public:
    static double kurse;
    Euro() {};
    ~Euro() {}
    double toRub(double x) override;
    void show(double x) const override;
};

