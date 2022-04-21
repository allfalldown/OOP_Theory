#pragma once
#include <iostream>
#include <string>

using namespace std;

class Human{
    private:
        string name, address;
        int day, month, year;
    public:
        string work_address;
        Human(){
            name = address = work_address = "None";
            day = month = year = 0;
        }
        void BasicInput(){
            cout << "Type name: "; 
            cin.ignore(); getline(cin, name);
            cout << "Day: "; cin >> day;
            cout << "Month: "; cin >> month;
            cout << "Year: "; cin >> year;
        }
        virtual void Input(){};
        
        void BasicDisplay(){
            cout << "Full name: "; cout << name<< endl;
            cout << "Date of birth: "; cout << day << "/" << month << "/" << year << endl;
        }
        
        virtual void Display(){};
};
