#pragma once
#include <iostream>

using namespace std;

class StackPrimeFactor{
    private:
        int ara[1000];
        int top;
    public:
        StackPrimeFactor();
        void push(int x);
        int pop();
        bool isEmpty();
};
