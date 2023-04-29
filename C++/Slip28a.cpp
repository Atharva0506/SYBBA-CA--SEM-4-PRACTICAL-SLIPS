// Slip 28 a) Write a C++ program to read array of ' n' integers from user
// and display it in reverse order.(Use Dynamic memory allocation)

#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter the number of items:"
         << "\n";
    cin >> n;
    int *arr = new int(n);
    cout << "Enter " << n << " items" << endl;
    for (x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    cout << "You entered: ";
    for (x = 0; x < n; x++)
    {
        cout << arr[x] << " ";
    }
    for (x = n - 1; x >= 0; x--)
    {
        cout << "\nArray elements reverse order" << arr[x];
    }
    return 0;
}