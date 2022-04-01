#include "StackPrimeFactor.h"


StackPrimeFactor::StackPrimeFactor(){
    top = 0;}

void StackPrimeFactor::push(int x){
    if(top == 1000){
        cout << "Stack is full" << endl;
        return;
    }
    else {
        ara[top] = x;
        top++;
    }
}

int StackPrimeFactor::pop(){
    if(top == 0){
        cout << "Stack is empty" << endl;
        return 0;
    }
    else{
        top--;
        return ara[top];
    }
}

bool StackPrimeFactor::isEmpty(){
    return (top == 0);
}
    

