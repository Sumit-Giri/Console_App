#include <iostream>
using namespace std;
class Circle
{
public:
    Circle();
    ~Circle();

    void setDimensions(double r);
    void setArea();
    void setCircumference();
    double getArea();
    double getCirumference();

private:
    double mRadius;
    double mArea;
    double mCircumference;
};
