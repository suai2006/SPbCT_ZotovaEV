#include "Euro.h"
double Euro::toRub(double x) {
    cout << "Курс Euro " << kurse << endl;
    return x * kurse;
}
void Euro::show(double x)const {
    cout << fixed << setprecision(2) << "EUR: " << x << endl;
}
double Euro::kurse = 73.28;
