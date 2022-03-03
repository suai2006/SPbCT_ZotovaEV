#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
class UserClass
{
private:
	std::string name;
public:
	UserClass();
	UserClass(std::string str);
	~UserClass();
	UserClass& operator=(const UserClass& ob);
	friend ostream& operator<<(ostream& out, const UserClass& ob);// для перегрузки вывода на экран
	
	
};