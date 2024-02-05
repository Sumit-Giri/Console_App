#include <iostream>
#include <cmath>
using namespace std;
class Ellipse
{
public:
    Ellipse();
    ~Ellipse();

    void setDimensions(double major, double minor);
    void setArea();
    void setPerimeter();
    int getArea();
    int getPerimeter();

private:
    double mMajoraxis;
    double mMinoraxis;
    double mArea;
    double mPerimeter;
};
