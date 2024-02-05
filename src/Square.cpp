// square.cpp
#include "../headers/Square.h"
using namespace std;

Square::Square() : length(0) {}
Square::~Square() {
}

void Square::setDimensions(int l)
{
    this->length=l;
    setArea();
    setPerimeter();
}
void Square::setArea() {
    area = length * length;
}
void Square::setPerimeter() {
    perimeter = 4 * length;
}
int Square::getArea()  {
    return area;
}
int Square::getPerimeter() {
    return perimeter;
}


