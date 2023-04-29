// Slip 8a) /*Write a C++ program to create a class Number, which contain static data member ' cnt' and member function ' Display() '. Display() should print number of times display operation is performed irrespective of the object responsible for calling Display().*/

#include <iostream>
using namespace std;
class Number
{
    static int cnt;

public:
    static void display()
    {
        cout << "\n Number of time call show: " << cnt;
        cnt++;
    }
};
int Number::cnt;
int main()
{
    Number s1, s2, s3, s4;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}