

#include "Date.h"


int main()
{
    
    setlocale(LC_ALL, "Russian");
    //вызов конструктор без параметров показывает текущюю дату
    cout << "Демонстрация работы конструктора без параметров" << endl;
    Date dt = Date();
    cout << endl;
    cout << "Введена не корректная дата 25.33.2020" << endl;
    Date dt1 = Date(25, 33, 2020);
    cout <<  endl;
    cout << "Демонстрация работы метода получения дня недели" << endl;
    Date dt2 = Date(25, 03, 2020);
    dt2.getWeekDay();

    return 0;
}