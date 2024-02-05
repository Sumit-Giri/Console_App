
#include <iostream>
using namespace std;
class Square
{
public:
    Square();
    ~Square();

    void setDimensions(int l);
    void setArea();
    void setPerimeter();
    int getArea();
    int getPerimeter();

private:
    int mLength;
    int mArea;
    int mPerimeter;
};
