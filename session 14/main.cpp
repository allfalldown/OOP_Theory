#include "Matrix.h"

int main(){
    cout << "Matrix 1: " << endl;
    Matrix<int> m1(2,3);
    m1.Input();
    m1.display();

    cout << "Matrix 2: " << endl;
    Matrix<int> m2(2,3);
    m2.Input();
    m2.display();

    cout << "Sum of 2: " << endl;
    Matrix<int> sum = m1 + m2;
    sum.display();

    cout << "Minus of 2: " << endl;
    Matrix<int> sub = m1 - m2;
    sub.display();
    return 0;
}