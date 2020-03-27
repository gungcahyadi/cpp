#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int arr[2][3][4];
int main ()
{    
    system("clear");

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                cout << "Data " << i << "|" << j << "|" << k << " adalah :";
                cin >> arr[i][j][k];
            }
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                cout << arr[i][j][k] << " ";
            }
        cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
