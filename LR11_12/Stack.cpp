#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "UserClass.h"
template <class SType> class Stack
 {
private:
    vector <SType> Bufer;
    bool isEmpty()const { return Bufer.size();}
public:
    Stack() {}
    ~Stack() {}

    void push(const SType& i) {
        Bufer.push_back(i);        
        cout << "Втолкнули в стэк: ";
        cout << i << endl;
    }
    
    void pop () {
        if (isEmpty()) {            
            cout << "Вытолкнули из стэка: ";
            cout << Bufer.back() << endl;
            Bufer.pop_back();
        }
        else cout << "Стэк пуст" << endl;
    }
    Stack<SType>& operator=(const Stack<SType>& ob)
    {
        Bufer = ob.Bufer;
        return *this;
    }
    void operator + (const SType& i) {push(i);}
    void operator -- () {pop();}
    explicit operator bool() const {return isEmpty();}    
};



int main()
{
    using namespace std;
    setlocale(LC_ALL, "Russian");
    Stack<int> StackInt;

    for (int i = 0; i < 2; i++) StackInt + i;

    cout << endl;

    for (int i = 0; i <= 2; i++)  --StackInt;

    cout << endl;
    cout << "Тестируем работу класса с вещественными числами" << endl;
    cout << endl;

    Stack<double> StackDouble;
    StackDouble + 0.15;
    StackDouble + 100.15;

    cout << endl;

    for (int i = 0; i <= 2; i++) --StackDouble;

    cout << endl;
    cout<< "Тестируем работу класса со строками" << endl;
    cout << endl;

    Stack<string> StackStr;
    for (int i = 0; i < 2; i++) StackStr + ("строка " + to_string(i));
    cout << endl;
    for (int i = 0; i <= 2; i++) --StackStr;

    if(!StackStr) cout << "Тестируем работу перегрузки bool" << endl;

    cout << endl;
    cout << "Тестируем работу класса с пользовательским классом как параметром" << endl;
    cout << endl;
    Stack<UserClass> UClass;

    UserClass u1;
    UserClass u2;

    UClass + u1;
    UClass + u2;
    cout << endl;
    --UClass;
    --UClass;
    --UClass;

    return 0;
}

