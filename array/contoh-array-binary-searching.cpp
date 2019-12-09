#include <iostream>
using namespace std;

int main ()
{
	int n,m,s,f; // deklarasi variable n
	cout << "terdapat data : 1,2,3,4,5,6,7,8,9,10 \n"; // menampilkan data array yang ada
    int data[10] = {1,2,3,4,5,6,7,8,9,10}; // data array
    s = 0; // index awal (yang terkecil)
    f = 9; // index akhir (yang terbesar)
    cin >>  n; // input angka yang dicari

    while(s <= f) {
        m = (s + f) / 2;

        if (n == data[m])
        { 
            cout << "angka " << n << " ditemukan di index " << m; // tampilkan text bila ditemukan 
            break;
        }else if (n > data[m])
        {
            s = m + 1;
        }
        else if (n < data[m])
        {
            f = m - 1;
        }
    }

    return 0;
}
