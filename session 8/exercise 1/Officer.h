#include "Worker.h"

class Officer:public Worker{
    private:
        int workDay;
    public:
        Officer(){
            workDay = 0;
        }
        void Input(){
            BasicInput();
            cout << "Day at office: "; cin >> workDay;
        }
        void Display(){
            BasicDisplay();
            cout << "Day at work: " << workDay << endl;
            cout << "Salary: " << ModifySalary(workDay * 100000) << endl;
        }
        void Type(){
            cout << " is Officer" << endl;
        }
};