// Slip 6a) /*Write a C++ program to create two Classes Square and
// Rectangle. Compare area of both the shapes using friend function.
// Accept appropriate data members for both the classes .*/

#include <iostream>
using namespace std;
#include <conio.h>
class Square
{
    friend class Rectangle; // declaring Rectangle as friend classint side;
public:
int side;
    Square(int s)
    {
        side = s;
    }
};
class Rectangle 
{
    int length;
    int breadth;

public:
    int getArea()
    {
        return length * breadth;
    }
    void shape(Square a)
    {
        length = a.side;
        breadth = a.side;
    }
};
int main()
{
    Square square(5);
    Rectangle rectangle;
    rectangle.shape(square);
    cout << " Area of rectangle is " << rectangle.getArea();
    return 0;
}