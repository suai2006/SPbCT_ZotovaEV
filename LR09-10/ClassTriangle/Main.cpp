//#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//#include <string.h>
#include "Triangle.h"

int Menu();
int GetNumber(int, int);
void ExitBack();
void Show(Triangle* [], int);
void Move(Triangle* [], int);
void FindMax(Triangle* [], int);
void IsIncluded(Triangle* [], int);
int Triangle::count = 0;
double GetDouble();

int main()
{
    setlocale(LC_ALL, "Russian");
    // Определения точек
    Point p1(0, 0); Point p2(0.5, 1);
    Point p3(1, 0); Point p4(0, 4.5);
    Point p5(2, 1); Point p6(2, 0);
    Point p7(2, 2); Point p8(3, 0);
    // Определения треугольников
    Triangle triaA(p1, p2, p3, "triaA");
    Triangle triaB(p1, p4, p8, "triaB");
    Triangle triaC(p1, p5, p6, "triaC");
    Triangle triaD(p1, p7, p8, "triaD");
    // Определение массива указателей на треугольники
    Triangle* pTria[] = { &triaA, &triaB, & triaC, &triaD }; int n = sizeof(pTria) / sizeof
    (pTria[0]);
    // Главный цикл
    bool done = false; 
    while(!done)
    {
        switch (Menu())
        {
        case 1: Show(pTria, n); break;
        case 2: Move(pTria, n); break;
        case 3: FindMax(pTria, n); break;
        case 4: IsIncluded(pTria, n); break;
        case 5: std::cout << "Конец работы." << std::endl;
            done = true; break;
        }
    }

    return 0;
}

// вывод меню
int Menu()
{
    std::cout << "\n===== Главное меню =====" << std::endl;
    std::cout << "1 - вывести все объекты\t 3 - найти максимальный" << std::endl;
    std::cout << "2 - переместить\t\t 4 - определить отношение включения" << std::endl;
    std::cout << "\t\t 5 - выход" << std::endl;
    return GetNumber(1, 5);
}
// ввод целого числа в заданном диапазоне
int GetNumber(int min, int max) 
{
    int number = min - 1; while (true)
    {
        std::cin >> number;
        if ((number >= min) && (number <= max) && (std::cin.peek() == '\n')) break;        
        else {
            std::cout << "Повторите ввод (ожидается число от " << min << " до " << max << "):" << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n') {
            
            };
        }
    }
    return number;
}
// возврат в функцию с основным меню
void ExitBack()
{
    std::cout << "Нажмите Enter." << std::endl;
    std::cin.get(); 
    std::cin.get();
}

// вывод всех треугольников
void Show(Triangle* p_tria[], int k)
{
    std::cout << "=== Перечень треугольников ===" << std::endl;
    int i = 0;
    for (i = 0; i < k; ++i) p_tria[i]->Show();
    //for (i = 0; i < k; ++i) p_tria[i]->ShowSideAndArea();
    ExitBack();
}
    // перемещение
void Move(Triangle * p_tria[], int k)
 {
    std::cout << "======= Перемещение ======" << std::endl; 
    int d = 1;
    std::cout << "Введите номер треугольника (от 1 до " << k << "): ";  
    int i = GetNumber(d, k) - 1;
    p_tria[i]->Show();
    Point dp;
    std::cout << "Введите смещение по х: ";
    dp.x = GetDouble();
    std::cout << "Введите смещение по у: ";
    dp.y = GetDouble();
    p_tria[i]->Move(dp);
    std::cout << "Новое положение треугольника:" << std::endl;
    p_tria[i]->Show();
    ExitBack();
 }
// поиск максимального треугольника
void FindMax(Triangle * p_tria[], int k)
{
    std::cout << "= Поиск максимального треугольника =" << std::endl;
    Triangle triaMax("triaMax");
        triaMax = *p_tria[0];
    // Поиск
    for (int i = 1; i < 4; ++i) if (*p_tria[i] > triaMax) triaMax = *p_tria[i];
    std::cout << "Максимальный треугольник: " << triaMax.GetName() << std::endl;
    ExitBack();
}
// определение отношения включения
void IsIncluded(Triangle * p_tria[], int k)
{
    std::cout << "===== Отношение включения =====" <<  std::endl;
    std::cout << "Введите номер 1-го треугольника (от 1 до " << k << "): ";
    int i1 = GetNumber(1, k) - 1;

    std::cout << "Введите номер 2-го треугольника (от 1 до " << k << "): ";
    int i2 = GetNumber(1, k) - 1;

    if (TriaInTria(*p_tria[i1], *p_tria[i2]))
        std::cout << p_tria[i1]->GetName() << " - входит в - "
        << p_tria[i2]->GetName() << std::endl;
    else
        std::cout << p_tria[i1]->GetName() << " - не входит в - "
        << p_tria[i2]->GetName() << std::endl;
    ExitBack();
}

// ввод вещественного числа
double GetDouble()
{
    double value; while (true)
    {
        std::cin >> value;
        if (std::cin.peek() == '\n') break;
        else
        {
            std::cout << "Повторите ввод (ожидается вещественное число):" << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n') {};
        }
    }
    return value;
}