// 15 a) /*Create a C++ class Fraction with data members Numerator and
// Denominator.
//  Write a C++ program to calculate and display sum of two fractions. (Use
// Constructor)*/

#include <iostream>
using namespace std;
class fraction
{
    int num;
    int deno;

public:
    fraction()
    {
    }
    fraction(int a, int b)
    {
        num = a;
        deno = b;
    }
    void display()
    {
        cout << "\n The numerator is-" << num;
        cout << "\n The denominator is-" << deno;
        cout << "\nFraction is-" << num << "/" << deno;
    }
    friend fraction operator+(fraction &, fraction &);
};
fraction operator+(fraction &p, fraction &q)
{
    fraction a;
    a.num = p.num + q.num;
    a.deno = p.deno + p.deno;
    return a;
}
int main()
{
    fraction f1(2, 1);
    fraction f2(3, 2);
    fraction f3;
    f1.display();
    f2.display();
    f3 = f1 + f2;
    cout << "\nAfter Addition-";
    f3.display();
    return 0;
}