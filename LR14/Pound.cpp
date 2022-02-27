#include "Pound.h"

double Pound::toRub(double x) {
    cout << "Курс Pound " << kurse << endl;
    return x * kurse;
}
void Pound::show(double x)const {
    cout << fixed << setprecision(2) << "POUND: " << x << endl;
}
double Pound::kurse = 88.23;