#pragma once
#include <iostream>
#include <cmath>

class Point{
    private:
        double ordinate, abscissa; 
    public:
        Point();
        Point(double ord, double abs);
        Point(const Point& point);
        void getInput();
        void display();
        void translation(int x, int y);   
        float distance(Point p1, Point p2); 
};

