// ellipse.cpp
#include "../headers/Ellipse.h"
#include <iostream>
#include <cmath>
using namespace std;

Ellipse::Ellipse() : mMajoraxis(0), mMinoraxis(0) {}
Ellipse::~Ellipse()
{
}

void Ellipse::setDimensions(double major, double minor)
{
    this->mMajoraxis = major;
    this->mMinoraxis = minor;
    setArea();
    setPerimeter();
}

void Ellipse::setArea()
{
    mArea = 3.14 * mMajoraxis * mMinoraxis;
}

void Ellipse::setPerimeter()
{
    mPerimeter = 3.14 * (3 * (mMajoraxis + mMinoraxis) - sqrt((3 * mMajoraxis + mMinoraxis) * (mMajoraxis + 3 * mMinoraxis)));
}

int Ellipse::getArea()
{
    return mArea;
}

int Ellipse::getPerimeter()
{
    return mPerimeter;
}
