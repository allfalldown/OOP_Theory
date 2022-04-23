#pragma once

#include <iostream>
#include <string>

using namespace std;
class Student{
    private:
        string id, name, address, dissertation_name; 
    public:
        int credit;
        double aver_score, fin_score, dissertation_score;
        string type;
        Student(){
            id = name = address = dissertation_name = type = "None";
            credit = 0;
            aver_score = fin_score = dissertation_score = 0;
        }
        void Input(){
            cout << "Name: "; 
            cin.ignore();
            getline(cin, name);
            cout << "ID: ";
            getline(cin, id);
            cout << "Address of student: ";
            getline(cin, address);
            cout << "Name of dissertation: ";
            getline(cin, dissertation_name);
            cout << "Credit point: "; cin >> credit;
            cout << "Averange score: "; cin >> aver_score;
            cout << "Final score: "; cin >> fin_score;
            cout << "Score of dissertation: "; cin >> dissertation_score;
        }

        void Display(){
            cout << "Name of student: " << name << endl; 
            cout << "ID: " << id << endl;
            cout << "Address of student: " << address << endl;
            cout << "Name of dissertation: " << dissertation_name << endl;
            cout << "Credit point: " << credit << endl;
            cout << "Averange score: " << aver_score << endl;
            cout << "Final score: " << fin_score << endl;
            cout << "Score of dissertation: " << dissertation_score << endl;
        }

        virtual bool IsGraduate(){ return false;}
};