#include "Time.h"

int main(){
    Time t1, t2, t3, t4;
    cout << "== Time 1st ==" << endl;
    cin >> t1; cout << t1;
    
    cout << "== Time 2nd ==" << endl;
    cin >> t2; cout << t2;

    t3 = t1 + t2;
    cout << "Sum: " << t3 << endl;

    t4 = t1 - t2;
    cout << "Minus: " << t4 << endl;

    if (t1 > t2)
        cout << "Time 1st is greater than time 2nd" << endl;
    if (t1 < t2)
        cout << "Time 1st is less than time 2nd" << endl;
    if (t1 == t2)
        cout << "Time 1st is equal time 2nd" << endl;
    return 0;
}