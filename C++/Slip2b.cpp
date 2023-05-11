// 2 b) Create a class for inventory of Mobile containing Model_Number, Company_Name, Price, Stock as data members. Mobile can be sold, if stock is available, otherwise purchase will be made. Write a C++ program to perform following functions :
//  i.To accept and display mobile details
//  ii.To sale a Mobile (Sale contains Model_Number & Quantity of mobile)
//  iii.To Purchase a Mobile (Purchase contains Model_Numbet &
//  Quantity of mobile)

#include <iostream>
using namespace std;
class inventory
{
    int modelnum, price, stock;
    char company[10];

public:
    void getput()
    {
        cout << "\n\nEnter model number:\t";
        cin >> modelnum;
        cout << "\nEnter mobile company name:\t";
        cin >> company;
        cout << "\nEnter price:\t";
        cin >> price;
        cout << "\nEnter stock:\t";
        cin >> stock;
        cout << "\n\n1.Model number\t" << modelnum;
        cout << "\n2.Company name\t\t" << company;
        cout << "\n3.Price\t" << price;
        cout << "\n4.Stock\t" << stock;
    }
    void sale()
    {
        int nosale;
        cout << "\n\nModel number\t" << modelnum;
        cout << "\nStock\t" << stock;
        cout << "\nEnter quantity to sale\t";
        cin >> nosale;
        stock = stock - nosale;
        cout << "\nStock remaining\t" << stock;
    }
    void purchase()
    {
        int nopurchase;
        cout << "\n\nModel number\t" << modelnum;
        cout << "\nStock\t" << stock;
        cout << "\nEnter quantity to purchase\t";
        cin >> nopurchase;
        stock = stock + nopurchase;
        cout << "\nStock remaining\t" << stock;
    }
};
int main()
{
    int i, n, ch;
    inventory in[30];
    do
    {
        cout << "\n\n1.Accept and display details\t";
        cout << "\n2.To sale mobile\t";
        cout << "\n3.To purchase mobile\t";
        cout << "\n4.Exit\t";
        cout << "\n\nEnter choice\t";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "How many records you want to enter:\t";
            cin >> n;
            for (i = 0; i < n; i++)
                in[i].getput();
            break;
        case 2:
            for (i = 0; i < n; i++)
                in[i].sale();
            break;
        case 3:
            for (i = 0; i < n; i++)
                in[i].purchase();
            break;
        case 4:
            exit(0);
        default:
            cout << "Wrong choice";
        }
    } while (ch != 4);
    return 0;
}