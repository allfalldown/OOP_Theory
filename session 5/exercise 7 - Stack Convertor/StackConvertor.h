#pragma once
#include <iostream>
#include <string>

using namespace std;

class StackConvertor{
    private:
        int ara[1000];
        int top;
    public:
        StackConvertor();
        void push(int x);
        int pop();
        bool isEmpty();
};
