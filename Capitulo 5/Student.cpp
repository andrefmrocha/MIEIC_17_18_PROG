//
// Created by andrefmrocha on 18-04-2018.
//

#include "Student.h"
void Student::setGrades(double shortExam, double project, double exam)
{
    this->shortExam = shortExam;
    this->project = project;
    this->exam = exam;
    int final_grade = (int)(shortExam*(weightShortExam/100)+project*(weightProject/100)+exam*weightExam/100);
    this->finalGrade = final_grade;
}

Student::Student()
{
    weightExam = 50;
    weightProject = 30;
    weightShortExam = 20;
}

Student::Student(const string &code, const string &name)
{
    this->code = code;
    this->name = name;
    weightExam = 50;
    weightProject = 30;
    weightShortExam = 20;
}