#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int arr[2][3];
int main ()
{    
	system("clear");

    for (int i = 0; i < 2; ++i)
    {
        cout << "array " << i << " adalah \n";
        for (int j = 0; j < 3; ++j)
        {
        	cout << "Data " << j << " adalah :";
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
	return 0;
}
