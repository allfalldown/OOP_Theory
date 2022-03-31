#pragma once
#include <iostream>

using namespace std;

class Stack{
    private:
        int top;
    public:
        int a[10000]; 
        Stack();
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};
