#include "Pedion.h"
#include "Zattacker.h"
#include "Carrier.h"

int main(){
    Robot *rob[1000];
    int n; cout << "Number of robots: "; cin >> n;
    for (int i=0; i<n; i++){
        cout << "1. Pedion" << endl << "2. Zattacker" << endl << "3.Carrier" << endl;
        int sw; cin >> sw;
        if (sw == 1)
            rob[i] = new Pedion;
        else if (sw == 2)
            rob[i] = new Zattacker;
        else if (sw == 3)
            rob[i] = new Carrier;
    }

    cout << endl << "== Details of legion ==" << endl;
    for (int i=0; i<n; i++){
        rob[i]->Display();
    }

    float max = 0; int track = 0; long long totale = 0;
    for (int i=0; i<n; i++){
        if (rob[i]->energy > max){
            max = rob[i]->energy;
            track = i;
        }
        totale += rob[i]->energy;
    }
    cout << endl << "== The highest consumed energy bot ==" << endl;
    rob[track]->Display();

    cout << endl << "Total energy of legion: " << totale << endl;
    return 0;
}