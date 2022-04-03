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

void Point::translation(int x, int y){
    this->ordinate += x;
    this->abscissa += y;
    cout << "Location change: (" << ordinate << ", " << abscissa << ") " << endl;
}

float Point::distance(Point p1, Point p2){
    return sqrt((p1.ordinate - p2.ordinate)*(p1.ordinate - p2.ordinate)+(p1.abscissa - p2.abscissa)*(p1.abscissa - p2.abscissa));
}