#pragma once
#include "Purse.h"

// ввод целого числа в заданном диапазоне
int GetNumber(int min, int max){

    int number = min - 1; 
    while (true) {

        std::cin >> number;
        if ((number >= min) && (number <= max) && (std::cin.peek() == '\n')) break;
        else {
            std::cout << "Повторите ввод (ожидается число от " << min << " до " << max << "):" << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n') {};
        }
    }
    return number;
}

// вывод меню
int Menu(){

    std::cout << "\n===== Главное меню =====" << std::endl;
    std::cout << "1 - Конвертировать валюту" << std::endl;
    std::cout << "2 - Внести деньги" << std::endl;
    std::cout << "3 - Забрать деньги" << std::endl;
    std::cout << "4 - Изменить курс" << std::endl;
    std::cout << "5 - выход" << std::endl;

    std::cout << std::endl;
    std::cout << "Выберите пункт: ";
    return GetNumber(1, 5);

}

// возврат в функцию с основным меню
void ExitBack(){

    std::cout << "Нажмите Enter." << std::endl;
    std::cin.get();
    std::cin.get();

}

void subMenu(string str) {

    std::cout << "=== " << str << " ===" << std::endl;
    std::cout << "1 - usd | 2 - euro | 3 - pound" << std::endl;
    std::cout << std::endl;

}

// выбор валюты для добавления
void AddMoney(Purse& Purse){

    subMenu("Выберите валюту которую хотите внести");
    std::cout << "Выберите пункт: ";
    int i = GetNumber(1, 3) - 1;

    std::cout << "Введите сумму: ";
    double money;
    std::cin >> money;
    Purse.addMoney(i, money);
    
    ExitBack();
}

void GetMoney(Purse& Purse) {

    subMenu("Выберите валюту для выдачи");
    std::cout << "Выберите пункт: ";
    int i = GetNumber(1, 3) - 1;

    std::cout << "Введите сумму которую хотите забрать: ";
    double money;
    std::cin >> money;
    Purse.getMoney(i, money);

    ExitBack();
}

void exchange(Purse& Purse) {
    subMenu("Конвертировать валюту");
    std::cout << "Выберите пункт: ";
    int i = GetNumber(1, 3) - 1;
    Purse.toRub(i);

    ExitBack();
}

void exchangeRateChage(Purse& Purse) {

    subMenu("Выберите валюту для изменения курса");
    std::cout << "Выберите пункт: ";
    int i = GetNumber(1, 3) - 1;

    std::cout << "Введите ввыдете новый курс: ";
    double rate;
    std::cin >> rate;
    Purse.rateChage(i, rate);

    ExitBack();
}