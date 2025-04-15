#include "Teacher.h"

Teacher::Teacher()
{
    hours = 10;
    cost = 100;
}

Teacher::Teacher(string name, float salary, int hours, float cost):Employee(name,salary)
{
    this->hours = hours;
    this->cost = cost;
}

void Teacher::setHours(int hours)
{
    this->hours = hours;
}

void Teacher::setCost(float cost)
{
    this->cost = cost;
}

int Teacher::getHours() const
{
    return hours;
}

float Teacher::getCost() const
{
    return cost;
}

void Teacher::showInfo() const
{
    cout << "\tTeacher: " << endl;
    Employee::showInfo();
    cout << "Hours: " << hours << endl;
    cout << "Cost: " << cost << endl;
}

float Teacher::countSalary() const
{
    return (salary+hours*cost)*0.73;
}
