#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee{
    private:
        string name;
        int day, month, year; //birthdate   
    public:
        int salary;
        Employee(){
            name = "None";
            day = month = year = salary = 0;
        }
        ~Employee(){}

        void BaseInput(){
            cout << "Name of employee: ";
            cin.ignore(); getline(cin, name);
            cout << "Birthday: " << endl << "Day: ";
            cin >> day;
            cout << "Month: "; cin >> month;
            cout << "Year: "; cin >> year;
        }

        virtual void Input() = 0;

        virtual void cSalary() = 0;

        void Display(){
            cSalary();
            cout << "Name: " << name << endl;
            cout << "Birthday: " << day << "/" << month << "/" << year << endl;
            cout << "Salary: " << salary << endl;
        }
};