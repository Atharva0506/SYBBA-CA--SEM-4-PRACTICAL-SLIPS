// 17 a)/*Create a C++ class MyMatrix. Write a C++ program to accept and
// display a Matrix. Overload binary '- ' operator to calculate subtraction of
// two matrices.*/

#include <iostream>
using namespace std;
class matrix
{
    int a[3][3];

public:
    void get();
    void disp();
    void operator-(matrix z);
};
void matrix::get()
{
    cout << "\n Enter the matrix 3 rows 3 col :-";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
}
void matrix::disp()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
void matrix::operator-(matrix z)
{
    int mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = a[i][j] - z.a[i][j];
        }
    }
    cout << "\nSubtraction of matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    matrix m, n;
    m.get();
    n.get();
    cout << "\nMatrix 1st: \n";
    m.disp();
    cout << "\nMatrix 2nd: \n";
    n.disp();
    m - n;
}