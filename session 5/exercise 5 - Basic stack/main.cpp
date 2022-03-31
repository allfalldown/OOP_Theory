#include "Stack.cpp"

int main()
{
    Stack s;
    int n, tmp;
    cout << "Number: "; cin >> n;
    for (int i=0; i<n; i++){
        cin >> tmp;
        s.push(tmp);
    }
    cout << s.pop() << " popped from stack\n";
    cout<<"All elements in stack : ";
    while(!s.isEmpty()){
        cout<<s.peek()<<" ";
        s.pop();
    }
 
    return 0;
}