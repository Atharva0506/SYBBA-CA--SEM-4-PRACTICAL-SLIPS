// Slip 1 a) a.Write C++ program to check maximum and minimum of two integer numbers (Use inline function and conditional operators)
#include<iostream>
#include<conio.h>
using namespace std;
class max1
{
public:
    inline int maximum(int a, int b)
    {
        return a > b ? a : b;
    }
    inline int minimum(int a, int b)
    {
        return a < b ? a : b;
    }
};
int main()
{
    int a, b;
    max1 m;
    cout << "\n Enter two number:";
    cin >> a >> b;

    cout << "\nNumber 1st: " << a << endl;
    cout << "\nNumber 2nd: " << b << endl;
    cout << "\nMaximum number is: " << m.maximum(a, b) << endl;
    cout << "\nMinimum is: " << m.minimum(a, b) << endl;
}
