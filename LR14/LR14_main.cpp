#include "Header.h"
/*
������ �� �� ����� ����, �������� �� ������� ������������ ��� �������.
1) � ��� ���� 3...n �����, � ��������, � �� �������� � ����, ������ � ��� ���.
   ���� ������ ������, �� ������ ���� �� �����, ����� ���� ����� � ������ �������� �� ������.
���
2) � ��� ���� ������ ����� � �� ��������� �� � ��������� ������.
   ��������� �� ������ ������ �����.

���� ������ ��������� ����� �� ������� ����.
*/
int main() {

    setlocale(LC_ALL, "Russian");

    Purse pp; // �������

    �urrency* usd = new Dollar;
    �urrency* euro = new Euro;
    �urrency* pound = new Pound;

    // ��������� ����� �� ���� �����, �� ����� ��������, ������� ���� ����� �� ����� �������� � moneyBox 0.0

    pp.add(usd, 20.50);
    pp.add(euro, 15.20);
    pp.add(pound, 15.20);

    pp.showM();
    pp.sumPerRub();
    
    bool done = false;
    while (!done)
    {
        
        switch (Menu())
        {
        case 1: exchange(pp); break;
        case 2: AddMoney(pp); break;
        case 3: GetMoney(pp); break;
        case 4: exchangeRateChage(pp); break;
        case 5: std::cout << "����� ������." << std::endl;
            done = true; break;
        }
    }
    return 0;
}
