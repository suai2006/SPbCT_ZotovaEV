
#include "Dollar.h"

double Dollar::toRub(double x) {
    cout<< "Курс доллара " << kurse << endl;
    return x * kurse;
}

void Dollar::show(double x)const {
    cout << fixed << setprecision(2) << "USD: " << x << endl;
}
double Dollar::kurse = 68.34;