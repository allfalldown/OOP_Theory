#include "Employee.h"

class Worker: public Employee{
    private:
        int bSalary, nProduct;
    public:
        Worker(){
            bSalary = nProduct = 0;
        }

        ~Worker(){}

        void Input(){
            BaseInput();
            cout << "Basic salary: "; cin >> bSalary;
            cout << "Number of products: "; cin >> nProduct;
        }

        void cSalary(){
            salary = bSalary + nProduct*5000;
        }

};