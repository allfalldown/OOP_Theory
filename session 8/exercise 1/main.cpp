#include "Officer.h"
#include "Producer.h"

int main(){
    Worker *work[1000];
    Officer off[1000];
    Producer pro[1000];
    int n, min, max, tMin, tMax;
    max = tMin = tMax = 0;
    min = 1000000;
    cout << "Number of worker: "; cin >> n;
    for (int i=0; i<n; i++){
        cout << "1. Officer" << endl;
        cout << "2. Producer" << endl;
        int sw; cin >> sw;
        if (sw == 1){
            work[i] = &off[i];
        }else if (sw == 2){
            work[i] = &pro[i];
        }
        work[i]->Input();
        if (work[i]->salary > max){
            max = work[i]->salary;
            tMax = i;
        }
        if (work[i]->salary < min){
            min = work[i]->salary;
            tMin = i;
        }
    }
    cout << "== Information here ==" << endl;
    for (int i=0; i<n; i++){
        cout << "." << i+1; work[i]->Type(); 
        work[i]->Display();
    }

    cout << "== After sort ==" << endl;
    cout << "The highest: " << endl;
    work[tMax]->Display();
    cout << "The lowest: " << endl;
    work[tMin]->Display();
    return 0;
}