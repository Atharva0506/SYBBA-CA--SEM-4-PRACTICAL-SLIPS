// 1 b) Create a class ComplexNumber containing members as:
// - real
// - imaginary
// Write a C++ program to calculate and display the sum of two complex numbers. (Use friend function and return by object)

#include <iostream>
using namespace std;
#include <conio.h>
class complex
{
    float real;
    float imaginary;

public:
    complex(float a = 0.0, float b = 0.0)
    {
        real = a;
        imaginary = b;
    }
    void display()
    {
        cout << "\n real number :" << real;
        cout << "\n imaginary number:" << imaginary << "i";
    }
    friend complex operator+(complex, complex);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}
int main()
{
    float n1, n2, n3, n4;
    cout << "\n Enter 1st real and imaginary no :- ";
    cin >> n1;
    cin >> n2;
    complex c1(n1, n2);
    cout << "\n Enter 2nd real and imaginary no :- ";
    cin >> n3;
    cin >> n4;
    complex c2(n3, n4);
    cout << "\n 1st complex no is : ";
    c1.display();
    cout << "\n 2nd complex no is : ";
    c2.display();
    complex c3;
    c3 = c1 + c2;
    cout << "\n After adding of float and imaginary no are :";
    c3.display();
    return 0;
}