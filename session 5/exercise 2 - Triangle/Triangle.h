#pragma once
#include <iostream>
#include <cmath>

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

class Triangle{
    private:
        Point point1, point2, point3;
    public:
        Triangle();
        Triangle(Point p1, Point p2, Point p3);
        Triangle(const Triangle& tri);
        void getInput();
        void display();
        void translation();
        void rotateOnePoint(Point p, int degree);
        void rotate();
        void zoomIn();
        void zoomOut();
};
