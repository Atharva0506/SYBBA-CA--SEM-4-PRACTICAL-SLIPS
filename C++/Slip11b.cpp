// 11 B)Create a base class Student with data members Roll_No,
// Name.Derives two classes from it, class Theory with data members M l , M2, M3, M4 and class Practical with data members P l , P2. Class
// Result(Total_Marks, Perce ntage , Grade) inherit s both Theory and
// Practical classes.(Use concept of Virtual Base Class and protected
// access specifiers)
// Write a C++ menu driven program to perform the following functions:
// i.Accept Student Information
// ii.Display Student Information
// iii.Calcul ate Total_marks, Percentage and Grade.

#include <string.h>
#include <iostream>
using namespace std;
class student
{
protected:
    int rno;
    char name[20];

public:
    void getdetails();
};
class Theory : public virtual student
{
protected:
    int mark1, mark2, mark3, mark4;

public:
    void getmarks();
};
class Practical : virtual public student
{
protected:
    int p1, p2;

public:
    void getpractical();
};
class result : public Theory, public Practical
{
    int total_marks;
    float per;
    char grade[10];

public:
    void calc();
    void sort(result &, result &);
    void display();
};
void student::getdetails()
{
    cout << "\n enter roll no and name :";
    cin >> rno >> name;
}
void Theory::getmarks()
{
    cout << "\n enter marks of four subject :";
    cin >> mark1 >> mark2 >> mark3 >> mark4;
}
void Practical::getpractical()
{
    cout << "\n enter Practical Details :";
    cin >> p1 >> p2;
}
void result::calc()
{
    int i;
    total_marks = mark1 + mark2 + mark3 + mark4 + p1 + p2;
    per = total_marks / (float)6;
    if (per < 50)
        strcpy(grade, "C");
    else if (per < 60)
        strcpy(grade, "B");
    else if (per < 75)
        strcpy(grade, "A");
    else
        strcpy(grade, "A+");
    cout << "\n calculation complete\n";
}
void result::sort(result &r1, result &r2)
{
    result rt;
    if (r1.total_marks > r2.total_marks)
    {
        rt = r1;
        r1 = r2;
        r2 = rt;
    }
}
void result::display()
{
    cout << "\n roll no=" << rno << "\n name =" << name;
    cout << "\n mark1=" << mark1 << "\n mark2 =" << mark2 << "\n mark3 = "<<mark3<<"\n mark4 = "<<mark4;
    cout << "\n Practical P1=" << p1 << "\n Practical P2=" << p2 << "\n percentage =" << per << "\n grade =" << grade;
}
int main()
{
    int n, i, ch, j;
    result r[20];
    do
    {
        cout << "\n MENU \n";
        cout << "\n 1.build master table \n 2. calculate total & grade \n";
        cout << "\n 3.display result in asscending order \n";
        cout << "\n 4. Exit \n enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n how many student :";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                cout << "enter student detailse \n";
                r[i].getdetails();
                r[i].getmarks();
                r[i].getpractical();
            }
            break;
        case 2:
            for (i = 0; i < n; i++)
                r[i].calc();
            break;
        case 3:
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                    r[i].sort(r[i], r[j]);
                r[i].display();
            }
            break;
        }
    } while (ch <= 3);
    return 0;
} 