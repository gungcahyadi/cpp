#include <iostream>
using namespace std;

int main ()
{
    // array multi dimensi (2)

    int nilai[2][3] = {
        {
            20,30,45
        },
        {
            42,12,90
        }
    };

    for (int i = 0; i < 2; ++i)
    {
        cout << "array " << i << " adalah \n";
        for (int j = 0; j < 3; ++j)
        {
            cout << nilai[i][j] << '\n';
        }
    }

    return 0;
}
