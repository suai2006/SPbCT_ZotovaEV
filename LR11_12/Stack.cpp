#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "UserClass.h"

int testInteger();
int testDouble();
int testString();
int testClassAsParam();

template <class SType> class Stack
 {
private:
    vector <SType> Bufer;
    bool isEmpty()const { return Bufer.size();}
public:
    Stack() {}
    ~Stack() {}

    SType push(const SType& i) {
        Bufer.push_back(i);
        return i;
    }
    
    SType pop () {
        SType result = Bufer.back();
        Bufer.pop_back();
        return result;
    }
    Stack<SType>& operator=(const Stack<SType>& ob)
    {
        Bufer = ob.Bufer;
        return *this;
    }
    SType operator + (const SType& i) {return push(i);}
    SType operator -- () {return pop();}
    explicit operator bool() const {return isEmpty();} 
};



int main()
{
    using namespace std;
    setlocale(LC_ALL, "Russian");

    testInteger();
    testDouble();
    testString();
    testClassAsParam();

    return 0;
}

int testInteger() {
    cout << endl;
    cout << "��������� ������ ������ � ������ �������" << endl;
    cout << endl;

    Stack<int> StackInt;
    for (int i = 0; i < 2; i++) {
        cout << "��������� � ����: " << (StackInt + i) << endl;
    }
    cout << endl;
    for (int i = 0; i <= 2; i++) {
        if (StackInt) cout << "���������� �� �����: " << --StackInt << endl;
        else cout << "���� ����" << endl;
    }
    return 0;
}
int testDouble() {
    cout << endl;
    cout << "��������� ������ ������ � ������������� �������" << endl;
    cout << endl;

    Stack<double> StackDouble;
    cout << "��������� � ����: " << (StackDouble + 0.15) << endl;
    cout << "��������� � ����: " << (StackDouble + 100.25) << endl;
    cout << endl;
    
    for (int i = 0; i <= 2; i++) {
        if (StackDouble) cout << "���������� �� �����: " << --StackDouble << endl;
        else cout << "���� ����" << endl;
    }
    return 0;
}
int testString() {
    cout << endl;
    cout << "��������� ������ ������ �� ��������" << endl;
    cout << endl;

    Stack<string> StackStr;
    for (int i = 0; i < 2; i++) {
        cout << "��������� � ����: " << StackStr + ("������ " + to_string(i)) << endl;
    };
    cout << endl;

    for (int i = 0; i <= 2; i++) {
        if (StackStr) cout << "���������� �� �����: " << --StackStr << endl;
        else cout << "���� ����" << endl;
    }
    return 0;
}
int testClassAsParam() {
    cout << endl;
    cout << "��������� ������ ������ � ���������������� ������� ��� ����������" << endl;
    cout << endl;

    Stack<UserClass> UClass;
    UserClass u1("UserClass_1");
    UserClass u2("UserClass_2");
    cout << "��������� � ����: " << (UClass + u1) << endl;
    cout << "��������� � ����: " << (UClass + u2) << endl;
    cout << endl;
    for (int i = 0; i <= 2; i++) {
        if (UClass) cout << "���������� �� �����: " << --UClass << endl;
        else cout << "���� ����" << endl;
    }
    return 0;
}
