// Slip 16
// a.Write a C++ program to create a class Machine with data members Machine_Id, Machine_Name, Price. Create and initialize all values of Machine object by using parameterized constructor and copy constructor. Display details of Machine using setw() and setprecsiion().

#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class Machine
{
private:
    int Machine_Id, Price; // data members
    char name[10];

public:
    Machine(int x1, int y1, char *z1)
    {
        strcpy(name, z1);
        Machine_Id = x1;
        Price = y1;
    }
    /* Copy constructor */
    Machine(const Machine &sam)
    {
        strcpy(name, sam.name);
        Machine_Id = sam.Machine_Id;
        Price = sam.Price;
    }
    void display()
    {
        cout << "\n Name:\t" << name;
        cout << "\n MachineID:\t" << setprecision(2) << Machine_Id;
        cout << "\n Price:\t" << setw(3) << Price;
    }
};
/* main function */
int main()
{
    Machine obj1(123, 1534, "archana"); // Normal constructor
    Machine obj2 = obj1;                // Copy constructor
    cout << "Normal constructor : ";
    obj1.display();
    cout << "Copy constructor : ";
    obj2.display();
    return 0;
}