// Slip 30 a) Write C++ program to create two classes Integer_Array and
// Float_Array with an array as a data member. Write necessary member
// functions to accept and display array elements of both the classes. Find
// and display average of both the array. (Use Friend function)

#include <iostream>
using namespace std;
class Array2;
class Array1
{
public:
    int *a;
    int n1, i;

public:
    void accept()
    {
        cout << "\n Enter length for first array : ";
        cin >> n1;
        a = new int[n1];
        for (i = 0; i < n1; i++)
        {
            cout << "\n Enter value : ";
            cin >> a[i];
        }
    }
    void display()
    {
        for (i = 0; i < n1; i++)
        {
            cout << a[i] << "\t";
        }
    }
};
class Array2
{
    int *b;
    int n2, i;

public:
    void accept1()
    {
        cout << "\n Enter length for second array : ";
        cin >> n2;
        b = new int[n2];
        for (i = 0; i < n2; i++)
        {
            cout << "\n Enter elements : ";
            cin >> b[i];
        }
    }
    void display()
    {
        for (i = 0; i < n2; i++)
            cout << b[i] << "\t";
    }
    friend void avg(Array1, Array2);
};
void avg(Array1 ob1, Array2 ob2)
{
    int s1, s2;
    int i, sum1 = 0, sum2 = 0;
    float avg1, avg2;
    for (i = 0; i < ob1.n1; i++)
    {
        sum1 = sum1 + ob1.a[i];
    }                     // calculate sum
    avg1 = sum1 / ob1.n1; // calculate average
    cout << "\nAverage of entered numbers are: " << avg1;
    for (i = 0; i < ob2.n2; i++)
    {
        sum2 = sum2 + ob2.b[i];
    }                     // calculate sum
    avg2 = sum2 / ob2.n2; // calculate average
    cout << "\nAverage of entered numbers are: " << avg2;
}
int main()
{
    Array1 a1;
    Array2 a2;
    a1.accept();
    a2.accept1();
    cout << "\n 1st array : ";
    a1.display();
    cout << "\n 2nd array : ";
    a2.display();
    avg(a1, a2);
    return 0;
}