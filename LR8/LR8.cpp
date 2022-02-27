#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>

//#include <Windows.h>
// над программой работала группа студентов
// Гарилюк В.В. Студент группы КЗФ-051
// Карабанова А.Я. Студентка группы КЗФ-051
// Зотова Е.В. Студентка группы КЗФ-051

/*
* над программой работала группа студентов
* Гарилюк В.В. Студент группы КЗФ-051
* Карабанова А.Я. Студентка группы КЗФ-051
* Зотова Е.В. Студентка группы КЗФ-051
* 
*/

int main()
{
    setlocale(LC_ALL, "Russian");

    double x = 3.23;
    double a = 10.23;
    const double b = 9.84;
    const double c = 0.5;
    double z, f;

    std::cout << "Введите текст в x: ";
    std::cin >> x;
    std::cout << "x = " << x << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Введите текст в a: ";    
    std::cin >> a;
    std::cout << "a = " << a << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    z = sqrt(pow(x,2.0)/b) - log(pow(a, 2.0) + pow(x, 2.0));
    f = pow(M_E, -c*x)*((x + sqrt(abs( x - b ) ) )/(x- sqrt(x + a)));
    std::cout << "z = " << z << std::endl;
    std::cout << "f = " << z << std::endl;
    

    return 0;
}
