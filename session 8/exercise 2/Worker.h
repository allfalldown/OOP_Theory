#include "Human.h"

class Worker: public Human{
    private:
        int bSalary, offDay, expYear;
    public:
        static int nWorker;
        static int GetNumber(){
            return nWorker;
        }
        Worker(){
            bSalary = offDay = expYear = 0;
            work_address = "Factory";
        }
        void Input(){
            Worker::nWorker++;
            BasicInput();
            cout << "Base salary: "; cin >> bSalary;
            cout << "Days not work: "; cin >> offDay;
            cout << "Experience years: "; cin >> expYear;
        }
        void Display(){
            BasicDisplay();
            cout << "Base salary: " << bSalary << endl;
            cout << "Offdays: " << offDay << endl;
            cout << "Experience years: " << expYear << endl;
        }
};

int Worker::nWorker = 0;