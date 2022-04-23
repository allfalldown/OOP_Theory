#include "Student.h"

class College: public Student{
    public:
        College(){
            type = "College";
        }
        bool IsGradute(){
            return ((credit > 120 && aver_score >= 5 && fin_score >=5)?true:false);
        }
};