// 12a.Write a C++ program to create a class Date with data members day, month, and year. Use default. and parameterized constructor to initialize date and display date in dd-Mon-yyyy format. (Example: Input: 04-01-2021 Output: 04-Jan-2021)

#include <iostream>
using namespace std;
class date
{
    int dd, mm, yyyy;

public:
    date() {}                 // default constructor
    date(int d, int m, int y) // creating parameterized constructor
    {
        dd = d;
        mm = m;
        yyyy = y;
    }
    void disp()
    {
        if (mm > 12)
            cout << "Invalid Month."; // mm is month if it is greater than 12 then it is  invalid.else 
            cout << "Input : " << dd << "/" << mm << "/" << yyyy << endl;
        if (mm == 1)
        {
            cout << "Output : " << dd << "/"
                 << "jan"
                 << "/" << yyyy;
        }
        else if (mm == 2)
        {
            cout << "Output : " << dd << "/"
                 << "Feb"
                 << "/" << yyyy;
        }
        else if (mm == 3)
        {
            cout << "Output : " << dd << "/"
                 << "mar"
                 << "/" << yyyy;
        }
        else if (mm == 4)
        {
            cout << "Output : " << dd << "/"
                 << "apr"
                 << "/" << yyyy;
        }
        else if (mm == 5)
        {
            cout << "Output : " << dd << "/"
                 << "may"
                 << "/" << yyyy;
        }
        else if (mm == 6)
        {
            cout << "Output : " << dd << "/"
                 << "jun"
                 << "/" << yyyy;
        }
        else if (mm == 7)
        {
            cout << "Output : " << dd << "/"
                 << "july"
                 << "/" << yyyy;
        }
        else if (mm == 8)
        {
            cout << "Output : " << dd << "/"
                 << "Aug"
                 << "/" << yyyy;
        }
        else if (mm == 9)
        {
            cout << "Output : " << dd << "/"
                 << "sep"
                 << "/" << yyyy;
        }
        else if (mm == 10)
        {
            cout << "Output : " << dd << "/"
                 << "oct"
                 << "/" << yyyy;
        }
        else if (mm == 11)
        {
            cout << "Output : " << dd << "/"
                 << "Nov"
                 << "/" << yyyy;
        }
        else if (mm == 12)
        {
            cout << "Output : " << dd << "/"
                 << "Dec"
                 << "/" << yyyy;
        }
    }
};
int main()
{
    int d, m, y;
    cout << "Enter a date : ";
    cin >> d;
    cout << "Enter a month: ";
    cin >> m;
    cout << "Enter a year : ";
    cin >> y;
    date d1(d, m, y);
    d1.disp();
    return (0);
}