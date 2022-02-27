#define _CRT_SECURE_NO_WARNINGS 1
#include "Triangle.h"
#include <math.h>
#include <iostream>
#include <iomanip>
#include <cstring>

Triangle::Triangle(Point _v1,Point _v2, Point _v3, const char* ident) : v1(_v1), v2(_v2), v3(_v3)
{
	char buf[16];
	objID = new char[strlen(ident) + 1];
	strcpy(objID, ident);
	count++;
	sprintf(buf, "Треугольник %d", count);
	name = new char[strlen(buf) + 1];
	strcpy(name, buf);
	a = sqrt((v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y));
	b = sqrt((v2.x - v3.x) * (v2.x - v3.x) + (v2.y - v3.y) * (v2.y - v3.y));
	c = sqrt((v1.x - v3.x) * (v1.x - v3.x) + (v1.y - v3.y) * (v1.y - v3.y));
	std::cout << "Constructor_1 for: " << objID << " (" << name << ")" << std::endl; //отладочный вывод
}

Triangle::Triangle(const char* ident)
{
	char buf[16];
	objID = new char[strlen(ident) + 1];
	strcpy(objID, ident);
	count++;
	sprintf(buf, "Треугольник %d", count);
	name = new char[strlen(buf) + 1];
	strcpy(name, buf);
	a = b = c = 0;
	std::cout << "Constructor_2 for: " << objID << " (" << name << ")" << std::endl; //отладочный вывод
}

Triangle::~Triangle()
{
	std::cout << "Destructor for: " << objID << std::endl;
	delete[] objID;
	delete[] name;
}

Triangle::Triangle(const Triangle& tria) : v1(tria.v1), v2(tria.v2),v3(tria.v3)
{
	std::cout << "Copy constructor for: " << tria.objID << std::endl; //отладочный вывод
	objID = new char[strlen(tria.objID) + strlen("(копия)") + 1];
	strcpy(objID, tria.objID); 
	strcat(objID, "(копия)");
	name = new char[strlen(tria.name) + 1]; 
	strcpy(name, tria.name); 
	a = tria.a; 
	b = tria.b; 
	c = tria.c;
}

Triangle& Triangle::operator =(const Triangle& tria)
{
	std::cout << "Assign operator: " << objID << " = " << tria.objID << std::endl; //отладочный вывод
	if (&tria == this) return *this; delete[] name;
	name = new char[strlen(tria.name) + 1]; 
	strcpy(name, tria.name);
	a = tria.a; 
	b = tria.b; 
	c = tria.c;
	return *this;
}

void Triangle::Show() const
{
	std::cout << name << ":";
	v1.Show(); 
	v2.Show(); 
	v3.Show();
	std::cout << std::endl;
}

// Переместить объект на величину (dp.x. dp.у) 
void Triangle::Move(Point dp)
{
	v1 += dp;
	v2 += dp;
	v3 += dp;
}

bool Triangle::operator>(const Triangle& tria) const
{
	double pi = 3.14159265358979323846;
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	double p1 = (tria.a + tria.b + tria.c) / 2;
	double s1 = sqrt(p1 * (p1 - tria.a) * (p1 - tria.b) * (pi - tria.c));
	if (s > s1) return true;
	else
		return false;
}

bool TriaInTria(Triangle tria1, Triangle tria2) {
	Point v1 = tria1.Get_v1();
	Point v2 = tria1.Get_v2();
	Point v3 = tria1.Get_v3();
	return (v1.InTriangle(tria2) &&
		v2.InTriangle(tria2) &&
		v3.InTriangle(tria2));
	return true;
}
