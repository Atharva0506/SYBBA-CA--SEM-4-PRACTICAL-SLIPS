
// 21b Define a class for a 3 dimensional points.. Write necessary member
// functions for accepting & displaying the point object. Overload the
// following operators: Operator Example Purpose
//  + (Binary) p3=p1+p2 adds coordinates of point p1 to p2.
// – (Unary) -p1 Negates coordinates of point p1
#include <iostream>
using namespace std;
class point
{
    int x, y, z;

public:
    void get()
    {
        cout << "\nEnter 3-Dimensional points (3 values) : ";
        cin >> x >> y >> z;
    }
    void disp()
    {
        cout << x << "\t" << y << "\t" << z << endl;
    }
    point operator+(point &t)
    {
        point tp;
        tp.x = x + t.x;
        tp.y = y + t.y;
        tp.z = z + t.z;
        return tp;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
        disp();
    }
};
int main()
{
    point p1, p2, p3;
    p1.get();
    p2.get();
    cout << "\nFirst 3-Dimensional point:(three values) ";
    p1.disp();
    cout << "\nSecond 3-Dimensional point (three values): ";
    p2.disp();
    p3 = p1 + p2;
    cout << "\nAdded point: ";
    p3.disp();
    cout << "\n\nNegated co-ordinate of p1: ";
    -p1;
    return 0;
}