// triangle.cpp
#include "../headers/Triangle.h"
using namespace std;

Triangle::Triangle() : mLength1(0), mLength2(0), mBase(0), mHeight(0) {}
Triangle::~Triangle()
{
}

void Triangle::setDimensions(int l1, int l2, int b, int h)
{
    this->mLength1 = l1;
    this->mLength2 = l2;
    this->mBase = b;
    this->mHeight = h;
    setArea();
    setPerimeter();
}
void Triangle::setArea()
{
    mArea = 0.5 * mBase * mHeight;
}
void Triangle::setPerimeter()
{
    mPerimeter = mLength1 + mLength2 + mBase;
}
double Triangle::getArea()
{
    return mArea;
}
int Triangle::getPerimeter()
{
    return mPerimeter;
}
