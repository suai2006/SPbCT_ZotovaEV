#pragma once
#include "�urrency.h"
#include "Dollar.h"
#include "Euro.h"
#include "Pound.h"

using namespace std;
class Purse
{
private:
    vector<�urrency*> p;
    vector <double> moneybox;
    
public:
    Purse() = default;
    Purse(�urrency* c) { p.push_back(c); }
    Purse(const Purse & p) = default;
    Purse& operator=(const Purse & p) = default;
    ~Purse() {}

    void showM()const;
    void sumPerRub();
    void addMoney(int i, double x);
    void getMoney(int i, double x);
    void add(�urrency* c, double x);
    void rateChage(int i, double x);
    void toRub(int i);    
};

