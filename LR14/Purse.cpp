#include "Purse.h"

void Purse::showM()const {
    
    for (int i = 0; i < p.size(); i++) {        
        �urrency* const& item = p[i];
        const double& x = moneybox[i];
        item->show(x);
    }    
    cout << endl;
}

void  Purse::sumPerRub() {
    int i = 0;
    double summ = 0;

    for (�urrency* const& item : p) {
        double& x = moneybox[i];
        summ = summ + item->toRub(x);
        i++;
    }
    
    cout << endl;
    cout << "����� ������: " << (int)summ << " ���. " << int((summ - (int)summ) * 100) << " ���." << endl;
}

void Purse::addMoney(int i, double x) {

    double& money = moneybox[i];
    money = money + x;
    showM();
    sumPerRub();
}

void Purse::getMoney(int i, double x) {

    double& money = moneybox[i];
    if (money >= x) {
        money = money - x;
        showM();
        sumPerRub();
    }
    else {
        cout << "� ��� ������� ���" << endl;
        cout << "������� ������ �����: ";
        double d;
        cin >> d;
        cout << endl;
        getMoney(i, d);
    }

}

void Purse::add(�urrency* c, double x) {
    p.push_back(c);
    moneybox.push_back(x);
}

void Purse::rateChage(int i, double x) {

    if (i == 0) Dollar::kurse = x;
    else if (i == 1) Euro::kurse = x;
    else Pound::kurse = x;

    cout << endl;
    sumPerRub();
}

void Purse::toRub(int i) {
    �urrency* const& item = p[i];
    double& money = moneybox[i];
    cout << money << " ue = " << item->toRub(money) << "�" << endl;
}