#include "UserClass.h"

UserClass::UserClass(){}

// Конструктор с параметром, чтоб записать "ИмяКласса_i" 
UserClass::UserClass(string str){
	name = str;
}

UserClass::~UserClass(){}

UserClass& UserClass::operator=(const UserClass& ob){
    return *this;
}
ostream& operator<<(ostream& out, const UserClass& ob) {
	out << ob.name;
	return out;
}


