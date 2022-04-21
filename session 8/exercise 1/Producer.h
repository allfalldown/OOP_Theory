#include "Worker.h"

class Producer:public Worker{
    private:
        int bSalary, nProduct;
    public:
        Producer(){
            bSalary = nProduct = 0;
        }
        void Input(){
            BasicInput();
            cout << "Base Salary: "; cin >> bSalary;
            cout << "Number of products: "; cin >> nProduct;
        }
        void Display(){
            BasicDisplay();
            cout << "Base salary: " << bSalary << endl;
            cout << "Number of products: " << nProduct << endl;
        }
        void Type(){
            cout << " is Producer" << endl;
        }
};
