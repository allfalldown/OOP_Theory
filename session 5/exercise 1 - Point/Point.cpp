#include "Point.h"

using namespace std;

Point::Point(){
    ordinate = abscissa = 0;
}

Point::Point(const Point& point){
    this->ordinate = point.ordinate;
    this->abscissa = point.abscissa;
}

Point::Point(double ord, double abs){
    this->ordinate = ord;
    this->abscissa = abs;
}

void Point::getInput(){
    cout << "Point xy: ";
    cin >> ordinate >> abscissa;
}

void Point::display(){
    cout << "Coordinates: (" << ordinate << ", " << abscissa << ") " << endl;
}

void Point::translation(){
    int x,y;
    cout << "Vector xy translate: "; cin >> x >> y;
    this->ordinate += x;
    this->abscissa += y;
    cout << "Location change: (" << ordinate << ", " << abscissa << ") " << endl;
}

