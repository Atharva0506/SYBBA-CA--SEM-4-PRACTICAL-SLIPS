// Slip 2 a.)Write a C++ program to calculate Volume of cone,sphere
// and cylinder by using function overloading

#include <iostream>
using namespace std;
float vol(int, int); // cylinder
float vol(float);    // sphere
int vol(float, int); // cone

int main()
{
    int radius, height, radius2, height2;
    float radius1;
    cout << "Enter radius and height of a cylinder:";
    cin >> radius >> height;
    cout << "Enter radius of sphere: ";
    cin >> radius1;
    cout << "Enter radius and height of a cone:";
    cin >> radius2 >> height2;
    cout << "\n Volume of cylinder is " << vol(radius, height); // cylinder
    cout << "\n Volume of sphere is " << vol(radius1);          // sphere
    cout << "\n Volume of cone is " << vol(radius2, height2);   // cone
    return 0;
}
float vol(int radius, int height) // cylinder
{
    return (3.14 * radius * radius * height);
}
float vol(float radius1) // sphere
{
    return ((4 * 3.14 * radius1 * radius1 * radius1) / 3);
}

int vol(float radius2, int height2) // cone
{
    return (0.33 * 3.14 * radius2 * radius2 * height2);
}
