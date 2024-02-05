
#include <iostream>
#include <cmath>
using namespace std;
class Line
{
public:
    Line();
    ~Line();
    void setDimensions(double x1, double x2, double y1, double y2);
    void setLength();
    double getLength();

private:
    double x1;
    double x2;
    double y1;
    double y2;
    double mLength;
};
