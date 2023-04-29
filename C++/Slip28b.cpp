// Slip 28 B) Create a C++ class Employee with data members Emp_Id,
// Emp_Name, Mobile_No, Salary. Write necessary member functions for
// the following:
//  i.Accept details of n employees
//  ii.Display employee details in descending order of their salary.
//  iii.Display details of a particular employee.
//  (Use Array of object and Use appropriate manipulators)*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include<string.h>
using namespace std;
void searchemployee();
char n[10], c[10];
long pno;
class Employee
{
public:
    int Emp_Id, Mobile_No, Salary;
    char name[40];
    void accept()
    {
        cout << "\n Enter EmpId:-";
        cin >> Emp_Id;
        cout << "\n Enter name of Emp:-";
        cin >> name;
        cout << "\n Enter Mobile_No:-";
        cin >> Mobile_No;
        cout << "\n Enter the Salary:-";
        cin >> Salary;
    }
    void sort(Employee &r1, Employee &r2)
    {
        Employee rt;
        if (r1.Salary < r2.Salary)
        {
            rt = r1;
            r1 = r2;
            r2 = rt;
        }
    }
    void display()
    {
        cout << "\nEmpId:-" << setw(15) << Emp_Id << endl;
        cout << "\n Name of Emp :-" << setw(15) << name << endl;
        cout << "\n Mobile_No :-" << setw(10) << Mobile_No << endl;
        cout << "\n Salary:-" << setw(15) << Salary << endl;
    }
    void searchemployee()
    {
        if (strcmp(name, c) == 0)
        {
            cout << "\n Empame: " << name << "\n Salary.: " << Salary;
            // display_data();
        }
    }
};
int main()
{
    Employee t[30];
    int num, ch, Salary, i;
    char cont;
    cout << "\n 1.Accept & display ";
    cout << "\n 2.Descending";
    cout << "\n 3.Search by Employee";
    do
    {
        cout << "\n Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n How many records you want to enter: ";
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                t[i].accept();
            }
            for (i = 0; i < num; i++)
            {
                t[i].display();
            }
            break;
        case 2:
            for (i = 0; i < num; i++)
            {
                for (int j = i + 1; j < num; j++)
                    t[i].sort(t[i], t[j]);
                t[i].display();
            }
            break;
        case 3:
            cout << "\n Enter Employee name: ";
            cin >> c;
            for (i = 0; i < num; i++)
            {
                t[i].searchemployee();
            }
            break;
        }
        cout << "\n Do you want to continue: ";
        cin >> cont;
    } while (cont == 'Y' || cont == 'y');
    return 0;
}