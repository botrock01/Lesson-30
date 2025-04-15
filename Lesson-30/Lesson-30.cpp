// Lesson-30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Teacher.h"
#include "Manager.h"
#include <vector>
#include <typeinfo>
#include <algorithm>

int main()
{
    Employee Mykhailo("Mykhailo", 250000.0);
   // Mykhailo.showInfo();
   // cout << "Total salary: " << Mykhailo.countSalary() << endl;
  //  cout << "==============================================="<<endl;
    Teacher Vladyslav("Vladyslav", 500.0, 5, 50);
  //  Vladyslav.showInfo();
  //  cout <<"Total: "<< Vladyslav.countSalary() << endl;
   // cout << "===============================================" << endl;
    Manager Max("Maksym", 20'000,10, 100'000 );
  //  Max.showInfo();
  //  cout << "Total: " << Max.countSalary() << endl;
   // cout << "===============================================" << endl;
   // cout << "===============================================" << endl;
   // cout << "===============================================" << endl;
   // cout << "===============================================" << endl;


    vector<Employee*> ITStep = {&Mykhailo , &Vladyslav , &Max,
        new Manager("Valeria", 25'000, 15, 50'000),
        new Teacher("Oliksij", 30'000, 15, 1'000),
        new Teacher("Evgen", 27'000, 20, 750)
    };

    for (int i = 0; i < ITStep.size(); i++)
    {
        cout << i + 1 << ". " << ITStep[i]->getName() << endl;
        cout << "\tTotal: " << ITStep[i]->countSalary() << endl;
    }
    cout << "============================================\n";
    cout << "List of Managers: \n";
    for (int i = 0; i < ITStep.size(); i++)
    {
       // cout << typeid(*ITStep[i]).name() << endl;
        if (typeid(*ITStep[i]) == typeid(Manager)) {
            ITStep[i]->showInfo();
        }
    }
    cout << "============================================\n";

    for (int i = 0; i < ITStep.size(); i++)
    {
        Teacher* obj = dynamic_cast<Teacher*>(ITStep[i]);
        if (obj != nullptr) {
            cout << obj->getName() << "Old cost: " << obj->getCost();
            obj->setCost(obj->getCost() + 100);
            cout << "New cost: " << obj->getCost() << endl;
        }
    }

    cout << "============================================\n";

    sort(ITStep.begin(), ITStep.end(), [](const Employee* left, const Employee* right) {
        return left->countSalary() < right->countSalary();
        });

    for (size_t i = 0; i < ITStep.size(); ++i) {
        cout << i + 1 << ". " << ITStep[i]->getName() << endl;
        cout << "\tTotal: " << ITStep[i]->countSalary() << endl;
    }
   

}
