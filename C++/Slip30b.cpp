// Slip 30 B) Create a C++ class for student having following membersRollno,Name,No. of subjects,Marks of each subject (no. of subjects
// varies for each student) Write a parameterized constructor which
// initialises Rollno,Name & no. of Subjects & creates the array of marks
// dynamically.Display the details of all students with percentage & class
// obtained.

#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[10];
    int tot_sub;
    char sub_name[10][30];
    int marks[10];
    int tot_marks;
    float per;

public:
    void getdata()
    {
        cout << "\n\n Enter the Roll no: ";
        cin >> rollno;
        cout << "\n\n Enter the name: ";
        cin >> name;
        cout << "\n\n How many subject: ";
        cin >> tot_sub;
        for (int i = 0; i < tot_sub; i++)
        {
            cout << "\n\n Enter the subject name; ";
            cin >> sub_name[i];
            cout << "\n\n Enter the marks: ";
            cin >> marks[i];
        }
    }

public:
    void display()
    {
        tot_marks = 0;
        cout << "\n Roll number:" << rollno;
        cout << "\n Student name: " << name;
        for (int i = 0; i < tot_sub; i++)
        {
            cout << "\n Subject name: " << sub_name[i];
            cout << "\n Subject mark: " << marks[i];
            tot_marks = tot_marks + marks[i];
        }
        per = tot_marks / tot_sub;
        cout << "\n\n Total obtain marks: " << tot_marks;
        cout << "\n\n Percentge: " << per;
        if (per >= 70)
            cout << "\n \n Grade=Dist";
        else if (per >= 60)
            cout << "\n \n Grade=A";
        else if (per >= 50)
            cout << "\n \n Grade=B";
        else if (per >= 40)
            cout << "\n \n Grade=Pass";
        else
            cout << "\n \n Grade=Fail";
    }
};
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}