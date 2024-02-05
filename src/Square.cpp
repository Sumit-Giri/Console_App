// square.cpp
#include "../headers/Square.h"
using namespace std;

Square::Square() : mLength(0) {}
Square::~Square()
{
}

void Square::setDimensions(int l)
{
    this->mLength = l;
    setArea();
    setPerimeter();
}
void Square::setArea()
{
    mArea = mLength * mLength;
}
void Square::setPerimeter()
{
    mPerimeter = 4 * mLength;
}
int Square::getArea()
{
    return mArea;
}
int Square::getPerimeter()
{
    return mPerimeter;
}
