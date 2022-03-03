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
    cout << "Тестируем работу класса с целыми числами" << endl;
    cout << endl;

    Stack<int> StackInt;
    for (int i = 0; i < 2; i++) {
        cout << "Втолкнули в стэк: " << (StackInt + i) << endl;
    }
    cout << endl;
    for (int i = 0; i <= 2; i++) {
        if (StackInt) cout << "Вытолкнули из стэка: " << --StackInt << endl;
        else cout << "стэк пуст" << endl;
    }
    return 0;
}
int testDouble() {
    cout << endl;
    cout << "Тестируем работу класса с вещественными числами" << endl;
    cout << endl;

    Stack<double> StackDouble;
    cout << "Втолкнули в стэк: " << (StackDouble + 0.15) << endl;
    cout << "Втолкнули в стэк: " << (StackDouble + 100.25) << endl;
    cout << endl;
    
    for (int i = 0; i <= 2; i++) {
        if (StackDouble) cout << "Вытолкнули из стэка: " << --StackDouble << endl;
        else cout << "стэк пуст" << endl;
    }
    return 0;
}
int testString() {
    cout << endl;
    cout << "Тестируем работу класса со строками" << endl;
    cout << endl;

    Stack<string> StackStr;
    for (int i = 0; i < 2; i++) {
        cout << "Втолкнули в стэк: " << StackStr + ("строка " + to_string(i)) << endl;
    };
    cout << endl;

    for (int i = 0; i <= 2; i++) {
        if (StackStr) cout << "Вытолкнули из стэка: " << --StackStr << endl;
        else cout << "стэк пуст" << endl;
    }
    return 0;
}
int testClassAsParam() {
    cout << endl;
    cout << "Тестируем работу класса с пользовательским классом как параметром" << endl;
    cout << endl;

    Stack<UserClass> UClass;
    UserClass u1("UserClass_1");
    UserClass u2("UserClass_2");
    cout << "Втолкнули в стэк: " << (UClass + u1) << endl;
    cout << "Втолкнули в стэк: " << (UClass + u2) << endl;
    cout << endl;
    for (int i = 0; i <= 2; i++) {
        if (UClass) cout << "Вытолкнули из стэка: " << --UClass << endl;
        else cout << "стэк пуст" << endl;
    }
    return 0;
}
