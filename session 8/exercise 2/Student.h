#include "Human.h"

class Student: public Human{
    private:
        string id;
        double aver_score;
    public:
        static int nStudent;
        static int GetNumber(){
            return nStudent;
        }
        Student(){
            id = "None";
            aver_score = 0.0;
            work_address = "School";
        }
        void Input(){
            Student::nStudent++;
            BasicInput();
            cout << "ID of student: "; 
            cin.ignore();
            getline(cin, id);
            cout << "Averange score: "; cin >> aver_score;
        }
        void Display(){
            cout << "ID: " << id << endl;
            BasicDisplay();
            cout << "Averange score: " << aver_score << endl;
            cout << "Work address: " << work_address << endl;
        }
};

int Student::nStudent = 0;