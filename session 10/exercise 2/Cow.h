#include "Cattle.h"

class Cow:public Cattle{
    private:
        const string say="CowCowCow";
    public:
        Cow();
        ~Cow();

        virtual void Say();
        void Print();
};

Cow::Cow(){
    SetSayToFeed(say);
    SetLiterMilk(rand()%20+1);
    SetNumChild(rand()%10+1);
}

Cow::~Cow(){}

void Cow::Say(){
    cout<<say;
}

void Cow::Print(){
    cout<<"Cow ";
    Cattle::Print();
}
