#pragma once
#include <iostream>

class Point{
    private:
        double ordinate, abscissa; 
    public:
        Point();
        Point(double ord, double abs);
        Point(const Point& point);
        void getInput();
        void display();
        void translation();
        void draw();
};

