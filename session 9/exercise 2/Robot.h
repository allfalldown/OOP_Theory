#pragma once
#include <iostream>
#include <random>
#include <string>

using namespace std;

class Robot{
    public:
        int m, f, p, e, s;
        float energy;
        string type;

        int random(int min, int max){
            static bool first = true;
            if (first) {  
                srand( time(NULL) );
                first = false;
            }
            return min + rand() % (( max + 1 ) - min);
        }

        Robot(){
            s = 10;
            m = f = p = e = 0;
            energy = 0;
            type = "None";
        }

        virtual void UpdateEnergy(){}

        void Display(){
            cout << "Type of robot: " << type << endl;
            cout << "Weight: " << m << endl;
            cout << "Flexibility: " << f << endl;
            cout << "Stored energy: " << e << endl;
            cout << "Total energy: " << energy << endl;
        }

};