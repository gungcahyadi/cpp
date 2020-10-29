#include <iostream>
using namespace std;

int main ()
{
    int n,bil,max = 0;

    cout << "Berapa Bilangan ? : \n";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cout << "masukan bilangan = ";
        cin >> bil;
        if (max < bil)
        {
            cout << bil << " adalah bilangan terbesar saat ini\n";
        }
        max = bil;
    }
    return 0;

}


