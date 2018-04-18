//
// Created by andrefmrocha on 18-04-2018.
//

#include "Date.h"
Date::Date(unsigned int year, unsigned int month, unsigned int day)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::Date(string yearMonthDay)
{
    year = stoi(yearMonthDay.substr(0,4).c_str());
    month = stoi(yearMonthDay.substr(5,2).c_str());
    day = stoi(yearMonthDay.substr(8,2).c_str());
}
string Date::getDate()
{
    string date = to_string(year) + '/' + to_string(month) + '/' + to_string(day);
    return date;
}

unsigned int Date::getDay()
{
    return day;
}

unsigned int Date::getMonth()
{
    return month;
}

unsigned int Date::getYear()
{
    return year;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day)
{
    this->month = month;
    this->day = day;
    this->year = year;
}

void Date::setDay(unsigned int day)
{
    this->day = day;
}

void Date::setMonth(unsigned int month)
{
    this->month = month;
}

void Date::setYear(unsigned int year)
{
    this->year = year;
}

void Date::show()
{
    cout << getDate() << endl;
}