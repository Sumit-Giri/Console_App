// triangle.cpp
#include "../headers/Triangle.h"
using namespace std;

Triangle::Triangle() : length1(0),length2(0),base(0), height(0) {}
Triangle::~Triangle() {
}

void Triangle::setDimensions(int l1,int l2,int b,int h)
{
    this->length1=l1;
    this->length2=l2;
    this->base=b;
    this->height=h;
    setArea();
    setPerimeter();
}
void Triangle::setArea() {
    area = 0.5 * base * height;
}
void Triangle::setPerimeter() {
    perimeter = length1 + length2 + base;
}
double Triangle::getArea()  {
    return area;
}
int Triangle::getPerimeter() {
    return perimeter;
}

