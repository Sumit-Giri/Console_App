// circle.cpp
#include "../headers/Circle.h"
using namespace std;

Circle::Circle() : mRadius(0), mArea(0), mCircumference(0) {}
Circle::~Circle()
{
}

void Circle::setDimensions(double r)
{
    this->mRadius = r;
    setArea();
    setCircumference();
}
void Circle::setArea()
{
    mArea = 3.14 * mRadius * mRadius;
}
void Circle::setCircumference()
{
    mCircumference = 2 * mRadius * 3.142856;
}
double Circle::getArea()
{
    return mArea;
}
double Circle::getCirumference()
{
    return mCircumference;
}
