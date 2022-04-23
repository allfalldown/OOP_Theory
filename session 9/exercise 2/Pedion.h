#include "Robot.h"

class Pedion: public Robot{
    public:
        void UpdateEnergy(){
            energy += m*s + (f+1)*s/2;
        }
        
        Pedion(){
            type = "Pedion";
            m = 20;
            f = random(1, 5);
            UpdateEnergy();
        }

        
};