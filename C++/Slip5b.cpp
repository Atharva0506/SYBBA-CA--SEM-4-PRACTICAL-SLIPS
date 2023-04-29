// Slip 5 b) /*Create a C++ base class Shape. Derive three different
// classes Circle, Sphere and Cylinder from shape class. Write a C++
// program to calculate area of Circle, Sphere(4 π r2) and Cylinder(2πr (h
// + r) ). (Use pure virtual function). */

#include <iostream>
using namespace std;
#include <conio.h>
#include <stdlib.h>
class shape
{
public:
    virtual void area() = 0;
};
class circle : public shape
{
public:
    int r;
    void getc()
    {
        cout << "\nenter the radius:";
        cin >> r;
    }
    void area();
};
class Sphere : public shape
{
public:
    int r1;
    void getr()
    {
        cout << "\n Enter the radius:";
        cin >> r1;
    }
    void area();
};
class Cylinder : public shape
{
public:
    int r2, h;
    void gett()
    {
        cout << "\n Enter the radius2 & height:";
        cin >> r2 >> h;
    }
    void area();
};
void circle::area()
{
    cout << (3.14 * r * r);
}
void Sphere::area()
{
    cout << (4 * 3.14 * r1 * r1);
}
void Cylinder::area()
{
    int d = h + r2;
    cout << d;
    cout << (2 * 3.14 * r2 * d);
}
int main()
{
    int ch;
    circle c;
    Sphere S;
    Cylinder t;
    do
    {
        cout << "\n1.Area of circle";
        cout << "\n2.Area of Sphere";
        cout << "\n3.Area of cylinder";
        cout << "\n4.Exit";
        cout << "\nEnter your choice:\t";
        cin >> ch;
        switch (ch)
        {
        case 1:
            c.getc();
            cout << "Area of circle:";
            c.area();
            break;
        case 2:
            S.getr();
            cout << "Area of Sphere:";
            S.area();
            break;
        case 3:
            t.gett();
            cout << "Area of cylinder:";
            t.area();
            break;
        case 4:
            exit(0);
        }
    } while (ch != 4);
    return 0;
};