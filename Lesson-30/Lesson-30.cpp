// Lesson-30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Teacher.h"
#include "Manager.h"

int main()
{
    Employee Mykhailo("Mykhailo", 250000.0);
    Mykhailo.showInfo();
    cout << "Total salary: " << Mykhailo.countSalary() << endl;
    cout << "==============================================="<<endl;
    Teacher Vladyslav("Vladyslav", 500.0, 5, 50);
    Vladyslav.showInfo();
    cout <<"Total: "<< Vladyslav.countSalary() << endl;
    cout << "===============================================" << endl;
    Manager Maksym("Maksym", 20000, 10, 100000);
    Maksym.showInfo();
    cout << "Total: " << Maksym.countSalary() << endl;
}
