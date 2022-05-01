#pragma once
#include <string>
#include <iostream>
#include <random>
#include <time.h>
#include<vector>

using namespace std;

class Cattle{
    private:
        int NumChild;
        int LiterMilk;
        string SayToFeed;
    public:
        Cattle();
        Cattle(int numchild,int milk,const string say);
        virtual ~Cattle();

        int GetNumChild(){
            return NumChild;
        }

        int GetLiterMilk(){
            return LiterMilk;
        }

        string GetSayToFeed(){
            return SayToFeed;
        }

        void SetNumChild(int num);
        void SetLiterMilk(int milk);
        void SetSayToFeed(string say);
    
        virtual void  Say()=0;
        virtual void Print();
};

Cattle::Cattle(){
    SetLiterMilk(0);
    SetNumChild(0);
    SetSayToFeed("");
}

Cattle::Cattle(int numchild, int milk, const string say){
    SetLiterMilk(milk);
    SetNumChild(numchild);
    SetSayToFeed(say);
}

Cattle::~Cattle(){}

void Cattle::SetNumChild(int num){
    NumChild=num;
}

void Cattle::SetLiterMilk(int milk){
    LiterMilk=milk;
}

void Cattle::SetSayToFeed(string say){
    SayToFeed=say;
}

void Cattle::Print(){
    cout<<"has "<<GetNumChild()<<" childs and provide "<<GetLiterMilk()<<" liters of milk, say "<<GetSayToFeed()<<" when get hungry.";
}







