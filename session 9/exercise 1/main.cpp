#include "College.h"
#include "University.h"

int main(){
    Student *stu[1000];
    //get data
    int n; cout << "Number of students: "; cin >> n;
    for (int i=0; i<n ; i++){
        cout << "1. College" << endl << "2. University" << endl;
        int sw; cin >> sw;
        if (sw == 1)
            stu[i] = new College;
        else if (sw == 2)
            stu[i] = new University;
        stu[i]->Input();
    }

    //display
    for (int i=0; i<n; i++){
        cout << i+1 << ". " << stu[i]->type << endl;
        stu[i]->Display();
    }

    int tmp = 0;
    for (int i=0; i<n; i++)
        if (stu[i]->IsGraduate())
            tmp++;
    cout << "The number of graduted student: " << tmp << endl;

    cout << "== Ranking student ==" << endl;
    double max1 = -1, max2 = -1; int track1 = -1, track2 = -1;
    for (int i=0; i<n; i++){
        if (stu[i]->aver_score > max1 && stu[i]->type == "University"){
            max1 = stu[i]->aver_score;
            track1 = i;
        } else if (stu[i]->aver_score > max2 && stu[i]->type == "College"){
            max2 = stu[i]->aver_score;
            track2 = i;
        }
    }


    if (max1 == -1)
        cout << "No data to find" << endl;
    else{
        cout << "== The highest average score university student ==" << endl;
        stu[track1]->Display();
    }

    if (max2 == -1)
        cout << "No data to find" << endl;
    else{
        cout << "== The highest average score college student ==" << endl;
        stu[track2]->Display();
    }

    return 0;
}