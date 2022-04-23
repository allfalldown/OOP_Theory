#include "Robot.h"

class Zattacker: public Robot{
    public:
        void UpdateEnergy(){
            energy += m*s + p*p*s;
        }

        Zattacker(){
            type = "Zattacker";
            m = 50;
            p = random(20, 30);
            UpdateEnergy();
        }

        
};