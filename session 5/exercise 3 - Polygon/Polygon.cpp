#include "Polygon.h"

Polygon::Polygon(){
    for (int i=0; i<10000; i++){
        point[i].ordinate = point[i].abscissa = 0;
    }
}

Polygon::Polygon(Point p, int rank){
    point[rank] = p;
}

void Polygon::getInput(int &n){
    cout << "Number of point (over 3): "; 
    while (true){
        cin >> n;
        if (n >= 3)
            break;
    }
    for (int i=0; i<n; i++){
        cout << "Point " << i+1 << ": ";
        point[i].getPoint();
    }
}

void Polygon::display(int n){
    cout << "Location of triangle's point: " << endl;
    for (int i=0; i<n; i++){
        cout << "Point " << i+1 << ": ";
        point[i].displayPoint();
    }
}

void Polygon::translation(int n){
    int tmp1, tmp2;
    cout << "Vector translate: "; cin >> tmp1 >> tmp2;
    for (int i=0; i<n; i++){
        this->point[i].ordinate += tmp1; this->point[i].abscissa += tmp2;
    }
}

void Polygon::rotateOnePoint(Point &p, int degree){
    float tmp = p.ordinate*cos(degree) - p.abscissa*sin(degree);
    float tmp2 = p.ordinate*sin(degree) - p.abscissa*cos(degree);
    p.ordinate = tmp;
    p.abscissa = tmp2;
}

void Polygon::rotate(int n){
    int degree;
    cout << "Degree to rotate: "; cin >> degree;
    for (int i=0; i<n; i++){
        rotateOnePoint(point[i], degree);
        point[i].displayPoint();
    }
}

void Polygon::zoomIn(int n){
    int tmp;
    cout << "Ratio to zoom in: "; cin >> tmp;
    for (int i=0; i<n; i++){
        point[i].ordinate *= tmp; point[i].abscissa *= tmp;
        point[i].displayPoint();
    }
}

void Polygon::zoomOut(int n){
    int tmp;
    cout << "Ratio to zoom out: "; cin >> tmp;
    for (int i=0; i<n; i++){
        point[i].ordinate /= tmp; point[i].abscissa /= tmp;
        point[i].displayPoint();
    }
}