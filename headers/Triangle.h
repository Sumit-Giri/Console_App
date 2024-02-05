
#include <iostream>
using namespace std;
class Triangle
{

public:
    Triangle();
    ~Triangle();
    void setDimensions(int l1, int l2, int b, int h);
    void setArea();
    void setPerimeter();
    double getArea();
    int getPerimeter();

private:
    int mLength1;
    int mLength2;
    int mBase;
    int mHeight;
    double mArea;
    int mPerimeter;
};
