#include "StackPrimeFactor.cpp"

int main(){
    int n, i = 2;
    cout << "Number to convert: "; cin >> n;
    StackPrimeFactor st;
    while (n != 1){
        if (n % i == 0){
            while (n % i == 0){
                n = n / i;
                st.push(i);
            }
        }
        i++;
    }
    cout << st.pop();
    while (!st.isEmpty()) {
        cout << " * " << st.pop();
    }

    cout << endl;
    return 0;
}