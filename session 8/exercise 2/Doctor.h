#include "Human.h"

class Doctor: public Human{
    private:
        int expYear;
        string department;
    public:
        static int nDoctor;
        static int GetNumber(){
            return nDoctor;
        }
        Doctor(){
            expYear = 0;
            department = "None";
            work_address = "Hospital";
        }
        void Input(){
            Doctor::nDoctor++;
            BasicInput();
            cout << "Specific department: "; cin.ignore();
            getline(cin, department);
            cout << "Years to cure: "; cin >> expYear;
        }
        void Display(){
            BasicDisplay();
            cout << "Specific department: " << department << endl;
            cout << "Years to cure: " << expYear << endl;
        }
};

int Doctor::nDoctor = 0;