// 6 B)/*Create a C++ class class Matrix
// {
// public:
// };
//  int **p; int r, c;
// //member functions
//  Write necessary member functions to:
// 1.Accept Matrix elements
// 11.Display Matrix elements.
// 1ll I.Calculate transpose of a Matrix .
// (Use constructor and destructor)*/

#include <iostream>
using namespace std;
#include <conio.h>
#include <process.h>
class MATRIX
{
    int a[5][5];
    int row, col;

public:
    MATRIX(int x, int y) // constructor
    {
        row = x;
        col = y;
    }
    ~MATRIX()
    {
        cout << "Destructor Invoked" << endl;
    }
    void getdata()
    {
        cout << "Enter elements of matrix:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                cin >> a[i][j];
        }
    }
    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
    void transpose()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                cout << a[j][i] << " ";
            cout << "\n";
        }
    }
};
int main()
{
    int m, n;
    cout << "Enter order of matrix : ";
    cin >> m >> n;
    MATRIX obj1(m, n);
    obj1.getdata();
    cout << "Matrix is \n ";
    obj1.display();
    cout << "Transpose of matrix is \n";
    obj1.transpose();
    return 0;
}