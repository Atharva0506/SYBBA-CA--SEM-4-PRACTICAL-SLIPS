//  18 a)/*Create a C++ class Student with
// data members Roll_no, S_Name, Class, Percentage. Accept twostudents information and display inform ation of student having maxim
// um percentage. (Use this pointer)*/

#include <iostream>
#include <string.h>
using namespace std;
class student
{
public:
    int id, per;                // data member (also instance variable)
    char name1[40], class1[40]; // data member(also instance variable)
    void accept()
    {
        cout << "\n Enter id:";
        cin >> id;
        cout << "\n Enter name :";
        cin >> name1;
        cout << "\n Enter the class:";
        cin >> class1;
        cout << "\n Enter the per:";
        cin >> per;
    }
    void display()
    {
        cout << "\n Student Id:-" << this->id;
        cout << "\n Student name:-" << this->name1;
        cout << "\n Student class:-" << this->class1;
        cout << "\n Student per:-" << this->per;
    }
};
int main()
{
    student t[30];
    int num, ch, per, i;
    char cont;
    cout << "\n 1.Accept & display ";
    cout << "\n 2.Maximum Percentage";
    do
    {
        cout << "\n Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (int i = 0; i < 2; i++)
            {
                t[i].accept();
            }
            for (int i = 0; i < 2; i++)
            {
                t[i].display();
            }
            break;
        case 2:
            for (i = 1; i <= 2; i++)
            {
                t[i].display();
            }
            int temp = 0;
            for (i = 0; i <= 1; i++)
            {
                if (t[temp].per < t[i].per)
                    temp = i;
            }
            cout << "\n STUDENT with Highest Per is : " << t[temp].per;
            cout << " \n And, STUDENT Name is : " << t[temp].name1;
            break;
        }
        cout << "\n Do you want to continue: ";
        cin >> cont;
    } while (cont == 'Y' || cont == 'y');
    return 0;
}