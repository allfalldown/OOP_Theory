#include "Robot.h"

class Carrier: public Robot{
    public:
        void UpdateEnergy(){
            energy += m*s + 4*e*s;
        }

        Carrier(){
            type = "Carrier";
            m = 30;
            e = random(50, 100);
            UpdateEnergy();
        }

        
};