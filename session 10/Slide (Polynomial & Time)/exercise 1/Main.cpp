#include "Polynomial.h"

int main(){
    Polynomial p1;
    int n; cout << "Number of coefficient'p1: "; cin >> n;
    for (int i=0; i<n; i++){ cin >> p1;}
    
    cout << "p1 = " << p1 << endl;
    
    Polynomial p2;
    cout << "Number of coefficient'p2: "; cin >> n;
    for (int i=0; i<n; i++){ cin >> p2;}
    cout << "p2 = " << p2 << endl << endl;

    cout << endl << "Increase and decrease ..." << endl;
    cout << "p1 after ++ = " << ++p1 << endl;
    cout << "p2 after -- = " << --p2 << endl;
    
    cout << endl << "Basic math ..." << endl;
    cout << "p1 + p2 = " << p1 + p2 << endl;
    cout << "p1 - p2 = " << p1 - p2 << endl;
    cout << "p1 * p2 = " << p1 * p2 << endl;
    return 0;
}