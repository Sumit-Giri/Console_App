#include<iostream>
#include<cmath>
using namespace std;
class Ellipse{
    public:
        Ellipse();
        ~Ellipse();
        
        void setDimensions(double major,double minor);
        void setArea();
        void setPerimeter();
        int getArea();
        int getPerimeter();
    

    private:
        double majoraxis;
        double minoraxis;
        double area;
        double perimeter;
    
};
