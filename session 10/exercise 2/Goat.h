#include "Cattle.h"

class Goat:public Cattle{
    private:
        const string say="GoatGoatGoat";
    public:
        Goat();
        ~Goat();
   
        virtual void Say();
        void Print();
};

Goat::Goat(){
    SetSayToFeed(say);
    SetLiterMilk(rand()%10+1);
    SetNumChild(rand()%10+1);
}

Goat::~Goat(){}

void Goat::Say(){
    cout<<say;
}

void Goat::Print(){
    cout<<"Goat ";
    Cattle::Print();
}