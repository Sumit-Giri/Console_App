// ellipse.cpp
#include "../headers/Ellipse.h"
#include <iostream>
#include <cmath>
using namespace std;

Ellipse::Ellipse() : majoraxis(0), minoraxis(0) {}
Ellipse::~Ellipse() {
    
}

void Ellipse::setDimensions(double major, double minor) {
    this->majoraxis = major;
    this->minoraxis = minor;
    setArea();
    setPerimeter();
}

void Ellipse::setArea() {
    area = 3.14 * majoraxis * minoraxis;
}

void Ellipse::setPerimeter() {
    perimeter = 3.14 * (3 * (majoraxis + minoraxis) - sqrt((3 * majoraxis + minoraxis) * (majoraxis + 3 * minoraxis)));
}

int Ellipse::getArea() {
    return area;
}

int Ellipse::getPerimeter() {
    return perimeter;
}


