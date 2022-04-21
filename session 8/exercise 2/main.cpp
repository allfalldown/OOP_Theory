#include "Student.h"
#include "Worker.h"
#include "Singer.h"
#include "Doctor.h"

int main(){
    Human *hum[100];
    Student stu[100];
    Worker wor[100];
    Singer sin[100];
    Doctor doc[100];

    cout << "Number: "; int n; cin >> n;
    for (int i=0; i<n; i++){
        cout << "1. Student" << endl << "2. Worker" << endl << "3. Singer" << endl << "4. Doctor" << endl;
        int sw; cin >> sw;
        if (sw == 1){
            hum[i] = &stu[i];
        }else if (sw == 2){
            hum[i] = &wor[i];
        }else if (sw == 3){
            hum[i] = &sin[i];
        }else if (sw == 4){
            hum[i] = &doc[i];
        }
        hum[i]->Input();
    }

    cout << "== Information here == " << endl;
    for (int i=0; i<n; i++)
        hum[i]->Display();

    cout << "== Number of per type ==" << endl;
    cout << "Number of students: " << Student::GetNumber() << endl;
    cout << "Number of workers: " << Worker::GetNumber() << endl;
    cout << "Number of singers: " << Singer::GetNumber() << endl;
    cout << "Number of doctors: " << Doctor::GetNumber() << endl;
    return 0;
}