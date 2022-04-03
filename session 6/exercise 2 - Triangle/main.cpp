#include "Triangle.cpp"

int main(){
    Triangle tri[10000];
    cout << "Number of triangles: ";
    int n; cin >> n;
    for (int i=0; i<n; i++){
        tri[i] = Triangle();
        cout << "Triangle " << i+1 << ": " << endl;
        tri[i].getInput();
    }

    cout << "Details of all triangles: " << endl;
    for (int i=0; i<n; i++){
        tri[i].display();
    }

    int tmp1, tmp2;
    cout << "Vector translate: "; cin >> tmp1 >> tmp2;
    for (int i=0; i<n; i++){
        tri[i].translation(tmp1, tmp2);
    }

    float maxp = 0, maxs = 0;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++){
            float tmp = tri[i].perimeter();
            if (tmp > maxp)
                maxp = tmp;
            tmp = tri[i].square(tmp/2);
            if (tmp > maxs)
                maxs = tmp;
        }
    cout << "The longest perimeter and the largest square is " << maxp << " and " << maxs << endl;
    return 0;
}