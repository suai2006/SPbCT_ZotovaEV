#pragma once
#include "car.h"
class Lorry:public Car
{
public:
	Lorry(void);//����������� ��� ���������� public:
	~Lorry(void);//����������
	Lorry(string, int, int, int); //����������� � ����������� 
	Lorry(const Lorry & ); //����������� ����������� 
	int Getgruz() { return gruz; } //����������� 
	void SetGruz(int);//��������
	Lorry& operator=(const Lorry&);//�������� ������������ 
	friend istream&operator>>(istream& in, Lorry& l);//�������� ����� 
	friend ostream& operator<<(ostream&out,const Lorry& l); //�������� ������ 
protected:
	int gruz; // ������� ����������������
};

