#include "Point.cpp"

int main(){
    Point point[10000];
    cout << "Number of points: ";
    int n; cin >> n;
    for (int i=0; i<n; i++){
        point[i] = Point();
        point[i].getInput();
    }

    cout << "Detail of points: " << endl;
    for (int i=0; i<n; i++){
        point[i].display();
    }

    float max = 0;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (max < point[0].distance(point[i], point[j]))
                max = point[0].distance(point[i], point[j]);
    cout << "The longest distance is " << max << endl;

    int x,y;
    cout << "Vector xy translate: "; cin >> x >> y;
    for (int i=0; i<n; i++){
        point[i].translation(x, y);
    }
    return 0;
}