#include "Time.h"

int main(){
    Time t1, t2, t3;
    cout << "== Time 1st ==" << endl;
    cin >> t1; cout << t1;
    
    cout << "== Time 2nd ==" << endl;
    cin >> t2; cout << t2;

    t3 = t1 + t2;
    cout << "Sum of " << t3;

    ++t1;
    cout << "Increase t1" << t1;
    --t2;
    cout << "Decrease t2" << t2;
    return 0;
}