#include "Stack.h"

Stack::Stack(){
    top = -1;
}

bool Stack::push(int x){
    if (top >= (10000 - 1)){
        cout << "Stack Overflow";
        return false;
    }
    else{
        a[++top] = x;
        cout << x << " pushed into stack" << endl;
        return true;
    }
}
 
int Stack::pop(){
    if (top < 0){
        cout << "Stack Underflow";
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}
int Stack::peek(){
    if (top < 0){
        cout << "Stack is Empty";
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}
bool Stack::isEmpty(){
    return (top < 0);
}

