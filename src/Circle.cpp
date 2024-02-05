// circle.cpp
#include "../headers/Circle.h"
using namespace std;

Circle::Circle():radius(0),area(0),circumference(0){}
Circle::~Circle() {
}

void Circle::setDimensions(double r)
{
    this->radius=r;
    setArea();
    setCircumference();
}
void Circle::setArea() {
    area = 3.14 * radius * radius;
}
void Circle::setCircumference() {
    circumference = 2 * radius * 3.142856;
}
double Circle::getArea()  {
    return area;
}
double Circle::getCirumference() {
    return circumference;
}


