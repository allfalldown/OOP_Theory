#include "Employee.h"

class Officer: public Employee{
    private:
        int workday;
    public:
        Officer(){
            workday = 0;
        }

        ~Officer(){}

        void Input(){
            BaseInput();
            cout << "Day at work: "; cin >> workday;
        }

        void cSalary(){
            salary = workday * 100000;
        }
};