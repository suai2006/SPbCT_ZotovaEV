#include <iostream>
#include "Time.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Time t; //определение экземпляра объекта t класса Time
    std::cout << "Начальное значение военного времени равно ";
    t.printMilitary();
    std::cout << std::endl << "Начальное значение стандартного времени равно ";
    t.printStandard();
    t.setTime(13, 27, 6);
    std::cout << std::endl << std::endl << "Военное время после setTime равно ";
    t.printMilitary();
    std::cout << std::endl << "Стандартное время после setTime равно ";
    t.printStandard();
    t.setTime(99, 99, 99);//попытка установить неправильные значения
    std::cout << std::endl << std::endl << "После попытки неправильной установки: " << std::endl <<
        "Военное время: ";
    t.printMilitary();
    std::cout << std::endl << "Стандартное время: ";
    t.printStandard();
    std::cout << std::endl;
    return 0;

}