#include "../headers/Rectangle.h"
using namespace std;

Rectangle::Rectangle() : mArea(0), mPerimeter(0) {}

Rectangle::~Rectangle()
{
}

void Rectangle::setDimensions(int l, int w)
{
    
    if (l >= 0 && w >= 0)
    {
        this->mLength = l;
        this->mWidth = w;
        setArea();
        setPerimeter();
    }
    else
    {
        cout << "Dimentions are non-negative." << endl;
    }
}

void Rectangle::setArea()
{
    mArea = mLength * mWidth;
}

void Rectangle::setPerimeter()
{
    mPerimeter = 2 * (mLength + mWidth);
}

int Rectangle::getArea()
{
    return mArea;
}

int Rectangle::getPerimeter()
{
    return mPerimeter;
}
