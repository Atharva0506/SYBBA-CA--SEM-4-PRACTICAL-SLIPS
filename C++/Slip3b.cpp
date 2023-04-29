// 3 B)/* Write a C++ program to accept ' n' numbers from user through
// Command Line Argument.Store all Even and Odd numbers in file "Even.txt" and "Odd.txt" respectively.*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
#define MAX 10
int main()
{
    int num[MAX], n;
    cout << "Enter the Limit\n";
    cin >> n;
    cout << "Enter the elements\n";
    for (int i = 0; i < n; i++)
        cin >> num[i];
    ofstream fout1, fout2;
    // creating and opening files
    fout1.open("Even.txt");
    if (fout1.fail())
    {
        cout << "Couldn't open file:\n Odd.txt";
        exit(1);
    }
    fout2.open("Odd.txt");
    if (fout2.fail())
    {
        cout << "Couldn't open file:\n Even.txt";
        exit(1);
    }
    // even and odd
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
            fout1 << num[i] << " ";
        else
            fout2 << num[i] << " ";
    }
    fout1.close();
    fout2.close();
    ifstream fin1, fin2;
    fin1.open("Odd.txt");
    if (fin1.fail())
    {
        cout << "Couldn't open file:\n Odd.txt";
        exit(1);
    }
    fin2.open("Even.txt");
    if (fin2.fail())
    {
        cout << "Couldn't open file:\n Even.txt";
        exit(1);
    }
    cout << "Contents of Odd.txt\n";
    do
    {
        char ch;
        fin1.get(ch);
        cout << ch;
    } while (fin1);
    fin1.close();
    cout << "\nContents of Even.txt\n";
    do
    {
        char ch;
        fin2.get(ch);
        cout << ch;
    } while (fin2);
    fin2.close();
    cout << "\n";
    system("pause");
    return 0;
}
