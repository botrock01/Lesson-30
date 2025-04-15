#pragma once
#include "Employee.h"
class Teacher :
    public Employee
{
protected:
    int hours;
    float cost;
public:
    Teacher();
    Teacher(string name, float salary, int hours, float cost);

    void setHours(int hours);
    void setCost(float cost);
    int getHours()const;
    float getCost()const;
    void showInfo()const;
    float countSalary()const;
};

