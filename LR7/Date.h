#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include<stdio.h>
#include<process.h>
#include <dos.h>
using namespace std;
class Date
{
private:
	std::vector<std::string> dayNames = { 
		"Воскресенье", 
		"Понедельник",
		"Вторник",
		"Среда",
		"Четверг",
		"Пятница",
		"Суббота"
	}; 
	tm* newDate;
	int maxMonth = 11;
	int maxDay = 31;
	void print();

public:
	Date();
	Date(int d, int m, int y);
	~Date();
	void getWeekDay();
};

