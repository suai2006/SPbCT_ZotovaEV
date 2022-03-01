#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

template <class SType> class Stack
 {

private:
    vector <SType> Bufer;

    bool isEmpty() {
        if (Bufer.size() == 0) {
            return false;
        }
        return true;
    }
public:
    Stack() {}
    ~Stack() {}

    void push(const SType& i) {

        Bufer.push_back(i);        
        cout << "��������� � ����: ";
        cout << i << endl;
    }
    
    void pop () {
        if (isEmpty()) {
            
            cout << "��������� �� �����: ";
            cout << Bufer.back() << endl;
            Bufer.pop_back();
        }
        else {
            cout << "���� ����" << endl;
        }
        
    }
    
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Stack<int> stack;

    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }

    cout << endl;

    for (int i = 0; i <= 5; i++) {
        stack.pop();
    }

    cout << endl;
    cout<< "��������� ������ ������ �� ��������" << endl;
    cout << endl;

    Stack<string> stack1;
    for (int i = 0; i < 5; i++) {
        stack1.push("������ "+to_string(i));
    }

    cout << endl;

    for (int i = 0; i <= 5; i++) {
        stack1.pop();
    }
    return 0;
}

