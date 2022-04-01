#include "StackConvertor.h"

StackConvertor::StackConvertor(){
    top = 0;
}

void StackConvertor::push(int x){
    if(top == 1000){
        cout << "Stack is full" << endl;
        return;
    }
    else {
        ara[top] = x;
        top++;
    }
}

int StackConvertor::pop(){
    if(top == 0){
        cout << "Stack is empty" << endl;
        return 0;
    }
    else{
        top--;
        return ara[top];
    }
}

bool StackConvertor::isEmpty(){
    return (top == 0);
}
    

