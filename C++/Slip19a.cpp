// 19 a) Write a C++ program to create a class Distance with data members
// meter and centimeter to represent distance . Write a function Larger( ) to
// return the larger of two distances. (Use this pointer)

#include <iostream>
using namespace std;
class dist
{
    int meter;
    float centimeter;

public:
    void get()
    {
        cout << "Enter meter value";
        cin >> meter;
        cout << "Enter centimeter";
        cin >> centimeter;
    }
    void put()
    {
        cout << "\t meter=" << this->meter;
        cout << "\t centimeter=" << this->centimeter;
    }
    dist larger(dist d1, dist d2)
    {
        if (d1.meter > d2.meter)
            return d1;
        else if (d1.meter < d2.meter)
            return d2;
        else
        {
            if (d1.centimeter > d2.centimeter)
                return d1;
            else
                return d2;
        }
    }
};
int main()
{
    dist d1, d2, d3;
    cout << "Enter First distance\n";
    d1.get();
    cout << "Enter second distance\n";
    d2.get();
    d3 = d3.larger(d1, d2);
    cout << "\nLarger Distance\n";
    d3.put();
    return 0;
}
