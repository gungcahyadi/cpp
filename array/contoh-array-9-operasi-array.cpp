#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int arr[2][3];
int arr2[2][3];
int arr3[2][3];
int main ()
{    
    system("clear");

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "Data " << i << "|" << j << " adalah :";
            cin >> arr[i][j];

        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "Data " << i << "|" << j << " adalah :";
            cin >> arr2[i][j];

        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            arr3[i][j] =  arr2[i][j] + arr[i][j];
        }
    }

    cout << "== PENJUMLAHAN ==";

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {

            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
