#include "Triangle.h"

Triangle::Triangle(){
    point1.ordinate = point1.abscissa = 0;
    point2.ordinate = point2.abscissa = 0;
    point3.ordinate = point3.abscissa = 0;
}

Triangle::Triangle(Point p1, Point p2, Point p3){
    point1 = p1; point2 = p2; point3 = p3;
}

Triangle::Triangle(const Triangle& tri){
    this->point1 = tri.point1;
    this->point2 = tri.point2;
    this->point3 = tri.point3;                                                                                                                                              
}

void Triangle::getInput(){
    cout << "Point 1: "; point1.getPoint();
    cout << "Point 2: "; point2.getPoint();
    cout << "Point 3: "; point3.getPoint();
}

void Triangle::display(){
    cout << "Location of triangle's point: " << endl;
    cout << "Point 1: "; point1.displayPoint();
    cout << "Point 2: "; point2.displayPoint();
    cout << "Point 3: "; point3.displayPoint();
}

void Triangle::translation(){
    int tmp1, tmp2;
    cout << "Vector translate: "; cin >> tmp1 >> tmp2;
    this->point1.ordinate += tmp1; this->point1.abscissa += tmp2;
    this->point2.ordinate += tmp1; this->point2.abscissa += tmp2;
    this->point3.ordinate += tmp1; this->point3.abscissa += tmp2;
}

void Triangle::rotateOnePoint(Point p, int degree){
    float tmp = p.ordinate*cos(degree) - p.abscissa*sin(degree);
    float tmp2 = p.ordinate*sin(degree) - p.abscissa*cos(degree);
    p.ordinate = tmp;
    p.abscissa = tmp2;
}

void Triangle::rotate(){
    int degree;
    cout << "Degree to rotate: "; cin >> degree;
    rotateOnePoint(point1, degree);
    rotateOnePoint(point2, degree);
    rotateOnePoint(point3, degree); 
}

void Triangle::zoomIn(){
    int tmp;
    cout << "Ratio to zoom in: "; cin >> tmp;
    this->point1.ordinate *= tmp; this->point1.abscissa *= tmp;
    this->point2.ordinate *= tmp; this->point2.abscissa *= tmp;
    this->point3.ordinate *= tmp; this->point3.abscissa *= tmp;
}

void Triangle::zoomOut(){
    int tmp;
    cout << "Ratio to zoom out: "; cin >> tmp;
    this->point1.ordinate /= tmp; this->point1.abscissa /= tmp;
    this->point2.ordinate /= tmp; this->point2.abscissa /= tmp;
    this->point3.ordinate /= tmp; this->point3.abscissa /= tmp;
}