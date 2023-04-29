// Slip 10 a) /*Write a C++ program to create a class Account with data
// members Acc_number, Acc_type and Balance. Write member functions
// to accept and display ' n' account details. (Use dynamic memory
// allocation)*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class Account
{
public:
    int Acc_no, Balance;
    char Acc_type[30];

public:
    Account() { cout << "Constructor" << endl; }
    ~Account() { cout << "Destructor" << endl; }
    void get_data()
    {
        cout << "\n Enter Acc_no.:";
        cin >> Acc_no;
        cout << "\n Enter Acc_type :";
        cin >> Acc_type;
        cout << "\n Enter Balance :";
        cin >> Balance;
    }
    void display_data()
    {
        cout << "\t" << Acc_no << "\t"
             << "\t" << Acc_type << "\t" << Balance;
    }
};
int main()
{
    int num, i;
    Account *a = new Account[4];
    delete[] a; // Delete array
    cout << "\n How many records u want?: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        a[i].get_data();
    }
    for (i = 0; i < num; i++)
    {
        a[i].display_data();
    }
    return 0;
}