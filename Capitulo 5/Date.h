//
// Created by andrefmrocha on 18-04-2018.
//

#ifndef CAPITULO_5_DATE_H
#define CAPITULO_5_DATE_H

#include <string>
#include <iostream>
using namespace std;

class Date
{
public:
    Date(unsigned int year, unsigned int month,unsigned int day);
    Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
    void setYear(unsigned int year) ;
    void setMonth(unsigned int month) ;
    void setDay(unsigned int day) ;
    void setDate(unsigned int year, unsigned int month, unsigned int day) ;
    unsigned int getYear() ;
    unsigned int getMonth() ;
    unsigned int getDay() ;
    string getDate(); // returns the date in format "yyyy/mm/dd"
    void show(); // shows the date on the screen in format "yyyy/mm/dd"
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

#endif //CAPITULO_5_DATE_H
