#pragma once
#include <iostream>

using namespace std;

struct Point{
    double ordinate, abscissa;
    Point(){
        ordinate = abscissa = 0;
    }

    void getPoint(){
        cin >> ordinate >> abscissa;
    }

    void displayPoint(){
        cout << "(" << ordinate << ", " << abscissa << ")" << endl;
    }
};

class Polygon{
    private:
        Point point[1000];
    public:
        Polygon();
        Polygon(Point p, int rank);
        void getInput(int &n);
        void display(int n);
        void translation(int n);
        void rotateOnePoint(Point &point, int degree);
        void rotate(int n);
        void zoomIn(int n);
        void zoomOut(int n);
};