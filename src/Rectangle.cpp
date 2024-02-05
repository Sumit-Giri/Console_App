#include "../headers/Rectangle.h"
using namespace std;

Rectangle::Rectangle() : area(0), perimeter(0) {}

Rectangle::~Rectangle()
{
}

void Rectangle::setDimensions(int l, int w) {
    //if length and width value is non-negative then it calculate area and perimeter
    if (l >= 0 && w >= 0) { 
        this->length = l;
        this->width=w;
        setArea();
        setPerimeter();
    } 
    else {
        cout << "Dimentions are non-negative." << endl;
    }
}

void Rectangle::setArea() {
    area = length * width;
}

void Rectangle::setPerimeter() {
    perimeter = 2 * (length + width);
}

int Rectangle::getArea() {
    return area;
}

int Rectangle::getPerimeter()  {
    return perimeter;
}
