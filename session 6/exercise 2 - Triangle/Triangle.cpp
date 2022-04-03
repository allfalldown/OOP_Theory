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

void Triangle::translation(int tmp1, int tmp2){
    this->point1.ordinate += tmp1; this->point1.abscissa += tmp2;
    this->point2.ordinate += tmp1; this->point2.abscissa += tmp2;
    this->point3.ordinate += tmp1; this->point3.abscissa += tmp2;
    cout << "== Location change ==" << endl;
    display();
}

float Triangle::distance(Point p1, Point p2){
    return sqrt((p1.ordinate - p2.ordinate)*(p1.ordinate - p2.ordinate)+(p1.abscissa - p2.abscissa)*(p1.abscissa - p2.abscissa));
}

float Triangle::perimeter(){
    return distance(point1, point2) + distance(point1, point3) + distance(point2, point3);
}

float Triangle::square(float p){
    return sqrt(p*(p-distance(point1, point2))*(p-distance(point1, point3))*(p-distance(point2, point3)));
}