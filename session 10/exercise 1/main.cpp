#include "Worker.h"
#include "Officer.h"

int main(){
    Employee *employee[1000];
    int n; cout << "Number of employees: "; cin >> n;
    for (int i=0; i<n; i++){
        cout << "1. Worker" << endl << "2. Officer" << endl;
        int sw; cin >> sw;
        if (sw == 1)
            employee[i] = new Worker;
        else if (sw == 2)
            employee[i] = new Officer;
        employee[i]->Input(); 
    }
    cout << endl << "Information of employees " << endl;
    for (int i=0; i<n; i++){
        cout << i+1 << ". " << endl;
        employee[i]->Display();
    }
    return 0;
}