#include "StackConvertor.cpp"

int main(){
    int n, i , tmp;
    cout << "Number to convert: "; cin >> n;
    StackConvertor st;

    cout << "To binary: ";
    i = 2; tmp = n;
    while (tmp != 0){
        st.push(tmp % i);
        tmp /= i;
    }
    while (!st.isEmpty()) {
        cout << st.pop();
    }
    cout << endl;

    
    cout << "To hexadecimal: ";
    i = 16; tmp = n;
    while (tmp != 0){
        st.push(tmp % i);
        tmp /= i;
    }
    while (!st.isEmpty()) {
        int t;
        t = st.pop();
        if (t > 9){
            cout << char (64+t-9);
        }
        else
            cout << t;
    }
    cout << endl;
    
    cout << "To octal: ";
    i = 8; tmp = n;
    while (tmp != 0){
        st.push(tmp % i);
        tmp /= i;
    }
    while (!st.isEmpty()) {
        cout << st.pop();
    }
    cout << endl;
    return 0;
}