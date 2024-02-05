// Rectangle Header file
#include <iostream>

class Rectangle {

    public:
        Rectangle();
        ~Rectangle();

        void setDimensions(int l, int w);
        void setArea();
        void setPerimeter();
        int getArea() ; 
        int getPerimeter();

    private:
        int length;
        int width;
        int area;
        int perimeter;
};


