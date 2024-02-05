#include <iostream>
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Square.h"
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Ellipse.h"

using namespace std;

int main()
{
    while (1)
    {
        cout << "WELCOME" << endl;
        cout << "1.Rectangle " << endl
             << "2.Circle " << endl
             << "3.Square " << endl
             << "4.Line " << endl
             << "5.Triangle " << endl
             << "6.Ellipse " << endl
             << "7.To Exit" << endl;
        int choice;
        cin >> choice;
        int length, breath;

        switch (choice)
        {
        //Switch case for rectangle
        case 1:
        {
            Rectangle r1;
            cout << "Rectangle" << endl;
            cout << "Enter the length and breadth: " << endl;

            cin >> length >> breath;
            cout << "1. Enter for area" << endl
                 << "2. Enter for perimeter " << endl;
            int choice1;
            cin >> choice1;
            r1.setDimensions(length, breath);
            if (choice1 == 1)
            {
                cout << "Area of Rectangle length=" << length << " and breath=" << breath << " is " << r1.getArea() << endl;
            }
            else if (choice1 == 2)
            {
                cout << "Perimeter of Rectangle length=" << length << " and breath=" << breath << " is " << r1.getPerimeter() << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        }
        
        //Switch case for Circle
        case 2:{
            Circle c1;
            cout << "Circle" << endl;
            cout << "Enter the Radius" << endl;
            double radius;
            cin >> radius;
            cout << "1. Enter for area" << endl
                 << "2. Enter for Circumference" << endl;
                 int choice1;
            cin >> choice1;
            c1.setDimensions(radius);
            if (choice1 == 1)
            {
                cout << "Area of Circle of Radius=" << radius << " is " << c1.getArea() << endl;
            }
            else if (choice1 == 2)
            {
                cout << "Circumference of Circle of Radius=" << radius << " is " << c1.getCirumference() << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        }
        //Switch case for Square
        case 3:{
            Square s1;
            cout << "Square" << endl;
            cout << "Enter the length" << endl;

            cin >> length;
            cout << "1. Enter for area" << endl
                 << "2. Enter for perimeter" << endl;
            int choice3;
            cin >> choice3;
            s1.setDimensions(length);
            if (choice3 == 1)
            {

                cout << "Area of Square of length=" << length << " is " << s1.getArea() << endl;
            }
            else if (choice3 == 2)
            {
                cout << "Perimeter of Square of length=" << length << " is " << s1.getPerimeter() << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        }
        //Switch case for Line
        case 4:{
            Line l1;
            cout << "Line" << endl;
            cout << "Enter the coordinate of line that are x-coordinate, x2-coordinate, y1-coordinate, y2-coordinate" << endl;
            int x1, x2, y1, y2;
            cin >> x1 >> x2 >> y1 >> y2;
            cout << "1. Enter for Distance between two point of line" << endl;
            int choice4;
            cin >> choice4;
            l1.setDimensions(x1, x2, y1, y2);
            if (choice4 == 1)
            {
                cout << "Distance Between Two Point of line is " << l1.getLength() << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        }
        //Switch case for Triangle
        case 5:{
            Triangle t1;
            cout << "Triangle" << endl;
            cout << "Enter the side1, side2, base and height" << endl;
            int length1, length2, base, height;
            cin >> length1 >> length2 >> base >> height;
            cout << "1. Enter for area" << endl
                 << "2. Enter for perimeter" << endl;
            int choice5;
            cin >> choice5;
            t1.setDimensions(length1, length2, base, height);
            if (choice5 == 1)
            {

                cout << "Area of Triangle of length=" << base << " and height=" << height << " is " << t1.getArea() << endl;
            }
            else if (choice5 == 2)
            {
                cout << "Perimeter of Triangle is " << t1.getPerimeter() << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        }
        //Switch case for Ellipse
        case 6:{
            Ellipse e1;
            cout << "Ellipse" << endl;
            cout << "Enter the majoraxis and minoraxis" << endl;
            double major, minor;
            cin >> major >> minor;
            cout << "1. Enter for area" << endl
                 << "2. Enter for perimeter" << endl;
            int choice6;
            cin >> choice6;
            e1.setDimensions(major, minor);
            if (choice6 == 1)
            {
                cout << "Area of Ellipse of Majoraxis=" << major << " and minoraxis=" << minor << " is " << e1.getArea() << endl;
            }
            else if (choice6 == 2)
            {
                cout << "Perimeter of Ellipse of Majoraxis=" << major << " and minoraxis=" << minor << " is " << e1.getPerimeter() << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        }
        //Switch case for break the loop
        case 7:{
            cout << "Bye" << endl;
            break;
            exit(0);
        }
        default:{
            cout << "Invalid Input....." << endl;
            break;
        }
        if (choice == 7)
        {
            break;
        }
        if(choice==7) break;
    }
}
}