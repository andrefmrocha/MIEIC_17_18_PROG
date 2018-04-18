//
// Created by andrefmrocha on 18-04-2018.
//

#ifndef CAPITULO_5_DATE_H
#define CAPITULO_5_DATE_H

#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class Date
{
public:
    Date();
    Date(unsigned int year, unsigned int month,unsigned int day);
    Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
    void setYear(unsigned int year) ;
    void setMonth(unsigned int month) ;
    void setDay(unsigned int day) ;
    void setDate(unsigned int year, unsigned int month, unsigned int day) ;
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    string getDate(); // returns the date in format "yyyy/mm/dd"
    void show(); // shows the date on the screen in format "yyyy/mm/dd"
    bool isValid();
    bool isEqualTo(const Date &d1) const;
    bool isNotEqualTo(const Date &d1) const;
    bool isAfter(const Date &d1) const;
    bool isBefore(const Date &d1) const;
private:
    bool isLeap();
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

#endif //CAPITULO_5_DATE_H
