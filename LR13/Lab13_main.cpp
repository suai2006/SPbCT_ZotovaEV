#include <iostream>
#include "Car.h" 
#include "Lorry.h" 
using namespace std; 

void f1(Car& c)
{
	c.Setmark("Opel"); 
	cout << c;
}

Lorry f2()
{
	Lorry l("Kia", 1, 2, 3);
	return l;
}


int main()
{
	Car a;
	cin >> a;
	cout << a;
	Car b("Ford", 4, 115);
	cout << b;
	a = b;
	cout << a;
	
	Lorry c;	
	cin >> c;
	cout<<c;
	Lorry g = f2();
	cout << g;
}