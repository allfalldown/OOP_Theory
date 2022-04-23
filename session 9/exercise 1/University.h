#include "Student.h"

class University: public Student{
    public:
        University(){
            type = "University";
        }
        bool IsGradute(){
            return ((credit > 170 && aver_score >= 5 && dissertation_score >=5)?true:false);
        }
};