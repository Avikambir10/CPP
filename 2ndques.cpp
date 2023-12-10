/* Q.4 Implement a C++ program demonstrating polymorphism using a base class ‘Shape’ and its derived classes ‘Circle’ and ‘Rectangle’. The Shape class should have a virtual function ‘calculateArea()’ to calculate and display the area of the shape. Implement the derived classes with appropriate data members and member functions to calculate the area of a circle and rectangle respectively.

Write a program that creates objects of Circle and Rectangle classes and demonstrates polymorphism by calling the calculateArea() function on each object.

Input:
First line contains radius of circle
second line contain length and breadth of rectangle respectively
Example Test case:

Input	                                Output
4.0                                     Area of the circle: 50.24
6.0 5.0	                                Area of the rectangle: 30 */
// Using polymorphism


/*   Shape* shapePtr = &circle;
   shapePtr->calculateArea();

   shapePtr = &rectangle;
   shapePtr->calculateArea();
*/
#include <bits/stdc++.h>
#define K 3.1415
using namespace std;
class Shape
{
public:
    virtual void calculateArea() = 0;
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r){};

    void calculateArea()
    {
        double area = radius * radius * K;
        cout << "\nArea of Circle is: " << area;
    }
};

class Rectangle : public Shape
{
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b){};
    void calculateArea()
    {
        double area = length * breadth;
        cout << "\nArea of Rectangle is: " << area;
    }
};

int main()
{
    double radius;
    cout << "Enter Radius: ";
    cin >> radius;

    double length, breadth;
    cout << "Enter l and b: ";
    cin >> length >> breadth;

    Circle c(radius);
    Rectangle r(length, breadth);
    //polymorphism...
    Shape *shapeptr = &c;
    shapeptr->calculateArea();

    shapeptr = &r;
    shapeptr->calculateArea();

    return 0;
}