#include "Date.h"

void Date::print()
{
    string theDay = (newDate->tm_mday < 10) ? "0" + to_string(newDate->tm_mday) : to_string(newDate->tm_mday);
    string theMonth = (newDate->tm_mon + 1 < 10) ? "0" + to_string(newDate->tm_mon + 1) : to_string(newDate->tm_mon + 1);
    string theYear = to_string(newDate->tm_year + 1900);

    cout << theDay + "." + theMonth + "." + theYear << endl;
}


Date::Date()
{
    time_t now = time(0);
    newDate = localtime(&now);
    print();
    
}

Date::Date(int d, int m, int y) : newDate(newDate)
{
    try
    {
        tm dt = { 0 };
        if (d < 0 || d > 31) throw "Invalid day";
        if (m < 0 || m > 11) throw "Invalid month";
        
        dt.tm_mday = d;
        dt.tm_mon = m - 1;
        dt.tm_year = y - 1900;
        time_t tt = mktime(&dt);
        newDate = localtime(&tt);
        print();

    }
    catch (const char* message)
    {
        cerr << message << endl;
    }
}

Date::~Date()
{
}

void Date::getWeekDay()
{
    if (newDate != nullptr) {
        string& dayname = dayNames[newDate->tm_wday];
        std::cout << dayname << std::endl;
    }
    else {
        std::cout << "Invalid Object Date" << std::endl;
    }
    
}
