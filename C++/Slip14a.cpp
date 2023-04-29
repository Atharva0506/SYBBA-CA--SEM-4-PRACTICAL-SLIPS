// 14 A ) Write C++ program to accept radius of circle . Calculate and display
// diameter, circumference and area of circle.

#include <iostream>
using namespace std;
inline float dimeter(float r)
{
    return (r * 2);
}
inline float circlearea(float r)
{
    return (3.14 * r * r);
}
inline float circumference(float r)
{
    return (3.14 * 2 * r);
}
int main()
{
    float radius;
    cout << "\n\nEnter the radius of the circle:";
    cin >> radius;
    cout << "\nDiameter of Circle:" << dimeter(radius);
    cout << "\nArea of Circle:" << circlearea(radius);
    cout << "\nCircumference of Circle:" << circumference(radius);
    return 0;
}