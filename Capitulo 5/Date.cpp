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

unsigned int Date::getDay() const
{
    return day;
}

unsigned int Date::getMonth() const
{
    return month;
}

unsigned int Date::getYear() const
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
bool Date::isLeap()
{
    if((year % 4 == 0 && year % 100 != 0)|| year % 100 == 0)
        return true;
    else
        return false;
}

bool Date::isValid()
{
    if(month == 0 || month > 12 || year < 0 || day > 31 || day == 0)
        return false;
    else if(month == 2)
    {
        if(isLeap())
        {
            if(day <= 29)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else
        {

            if(day <= 28)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        switch (month)
        {
            case 1:
                if(day <= 31)
                    return true;
                else
                    return false;
            case 3:
                if(day <= 31)
                    return true;
                else
                    return false;
            case 4:
                if(day <= 30)
                    return true;
                else
                    return false;
            case 5:
                if(day <= 31)
                    return true;
                else
                    return false;
            case 6:
                if(day <= 30)
                    return true;
                else
                    return false;
            case 7:
                if(day <= 31)
                    return true;
                else
                    return false;
            case 8:
                if(day <= 31)
                    return true;
                else
                    return false;
            case 9:
                if(day <= 30)
                    return true;
                else
                    return false;
            case 10:
                if(day <= 31)
                    return true;
                else
                    return false;
            case 11:
                if(day <= 30)
                    return true;
                else
                    return false;
            case 12:
                if(day <= 31)
                    return true;
                else
                    return false;
        }
    }

}

bool Date::isEqualTo(const Date &d1) const
{
    if(year == d1.getYear() && month == d1.getMonth() && day == d1.getDay())
        return true;
    else
        return false;
}

bool Date::isNotEqualTo(const Date &d1) const
{
    if(year == d1.getYear() && month == d1.getMonth() && day == d1.getDay())
        return false;
    else
        return true;
}

bool Date::isAfter(const Date &d1) const
{
    if(year > d1.getYear())
        return true;
    else if(year == d1.getYear())
    {
        if(month > d1.getMonth())
            return true;
        else if(month == d1.getMonth())
        {
            if(day > d1.getDay())
            {
                return false;
            }
            return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool Date::isBefore(const Date &d1) const
{
    if(isAfter(d1))
        return false;
    else if(isNotEqualTo(d1))
        return true;
}

Date::Date()
{
    time_t now = time(0);
    tm *now_time = localtime(&now);
    year = now_time->tm_year + 1900;
    month = now_time->tm_mon + 1;
    day = now_time->tm_mday;
}
