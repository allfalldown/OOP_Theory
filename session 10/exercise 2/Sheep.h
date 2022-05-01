#include "Cattle.h"

class Sheep:public Cattle{
    private:
        const string say="SheepSheepSheep";
    public:
        Sheep();
        ~Sheep();

        virtual void Say();
        void Print();
};

Sheep::Sheep(){
    SetSayToFeed(say);
    SetLiterMilk(rand()%5+1);
    SetNumChild(rand()%10+1);
}

Sheep::~Sheep(){}

void Sheep::Say(){
    cout<<say;
}

void Sheep::Print(){
    cout<<"Sheep ";
    Cattle::Print();
}