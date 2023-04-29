// Slip 29 B) Create a C++ class VisitingStaff with data members Name,
// No_of_Subjects, Name_of_Subjects[],Working_hours, Total_Salary.
// (Number of subjects varies for a Staff).Write a parameterized constructor to initialize the data members and create an array for
// Name_of_Subjectsdynamically . Display Visiting Staff details by
// calculating salary. (Assume remuneration Rs. 300 per working hour)

#include <iostream>
using namespace std;
class VisitingStaff
{
    char name[10];
    int tot_sub;
    char sub_name[10][30];
    int wh, k;

public:
    void getdata()
    {
        cout << "\n\n Enter the name:- ";
        cin >> name;
        cout << "\n\n How many subject-: ";
        cin >> tot_sub;
        for (k = 0; k < tot_sub; k++)
        {
            cout << "\n\n Enter the subject name;- ";
            cin >> sub_name[k];
        }
        cout << "\n\n Enter the Wh: ";
        cin >> wh;
    }
    void display()
    {
        cout << "\n Name of Staff : " << name;
        cout << "\n Total Subjects :" << tot_sub;
        for (k = 0; k < tot_sub; k++)
        {
            cout << "\n Subject Name:" << sub_name[k];
        }
        cout << "\n Working Hours:" << wh;
        cout << "\n";
    }
    void calculate(int rate = 300)
    {
        cout << "\n salary of VisitingStaff is Rs.:- " << wh * rate;
    }
};
int main()
{
    VisitingStaff s[10];
    int i, n;
    cout << "\n How many records you want?\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].getdata();
    }
    for (i = 0; i < n; i++)
    {
        s[i].display();
    }
    for (i = 0; i < n; i++)
    {
        s[i].calculate();
    }
    return 0;
}