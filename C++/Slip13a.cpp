// 13 A ) Write a C++ program to create a class
// Product with data members Product_id, Product_Name, Qty, Price.
// Write member functions to accept and display Product information also
// display number of objects created for Product class. (Use Static data
// member and Static member function)

#include <iostream>
using namespace std;
class Product
{
    int id, price, Qty;
    char i_name[20];
    static int cnt;

public:
    void getdata()
    {
        cout << "\n Enter Product Id\t\t";
        cin >> id;
        cout << "\n Enter Product name\t\t";
        cin >> i_name;
        cout << "\n Enter Product price\t";
        cin >> price;
        cout << "\n Enter Product Qty\t";
        cin >> Qty;
        cnt++;
    }
    void display()
    {
        // cout<<"\n*********************OUTPUT***********************";
        cout << "\n\nProduct code =\t" << id;
        cout << "\nProduct name =\t" << i_name;
        cout << "\nProduct price =\t" << price;
        cout << "\nProduct QTY =\t" << Qty;
    }
    static void nob()
    {
        cout << "\n number of objects created for class are\t" << cnt;
    }
};
int Product::cnt;
int main()
{
    Product ob[10];
    int n, i;
    cout << "\n Enter how many items : ";
    cin >> n;
    for (int i = 0; i < n; i++)
        ob[i].getdata();
    for (i = 0; i < n; i++)
        ob[i].display();
    ob[n - 1].nob();
    return 0;
}