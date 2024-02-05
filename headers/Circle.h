#include<iostream>
using namespace std;
class Circle{    
    public:
        Circle();
        ~Circle();

        //setter declaration for dimensions
        void setDimensions(double r);

        //setter for area
        void setArea();

        //setter for circumference
        void setCircumference();

        //getter for area
        double getArea();

        //getter for circumference
        double getCirumference();
    
    
    private:
        double radius;
        double area;
        double circumference;
    
};

