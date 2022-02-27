#pragma once
#include <string>
#include <iostream>
using namespace std;
class Car
{
public:
	Car(void);
public:
	virtual ~Car(void);
	Car(Car::string, int, int);
	Car(const Car&);
	string GetmarkHl() { return mark; };
	int Getcyl() { return cyl; };
	void Setmark(string); 
	void Setcyl(int);
	void Setpower(int);
	Car& operator=(const Car&);
	friend istream& operator>>(istream& in, Car& c);
	friend ostream&operator<<(ostream& out, const Car& c);
protected:
	string mark; 
	int cyl;
	int power;

};

