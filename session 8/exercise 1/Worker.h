#pragma once
#include <iostream>
#include <string>

using namespace std;

class Worker{
    private:
        string name;
        int day, month, year;   
    public:
        int salary;
        Worker(){
            name = "Rong";
            day = month = year = salary = 0;
        }
        void BasicInput(){
            cout << "Type name: "; 
            cin.ignore(); getline(cin, name);
            cout << "Day: "; cin >> day;
            cout << "Month: "; cin >> month;
            cout << "Year: "; cin >> year;
        }
        
        virtual void Input(){}
        
        void BasicDisplay(){
            cout << "Name of worker: "; cout << name<< endl;
            cout << "Date of birth: "; cout << day << "/" << month << "/" << year << endl;
        }
        
        virtual void Display(){}
        long long ModifySalary(int x){
            return salary += x;
        }

        virtual void Type(){}
};