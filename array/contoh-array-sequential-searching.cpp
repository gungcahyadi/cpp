#include <iostream>
using namespace std;

int main ()
{
	int n; // deklarasi variable n
	cout << "[23, 75, 80, 86, 90, 100, 101, 103, 106, 199, 202,212,450]\n"; // menampilkan data array yang ada
    cout << "Cari angka : "; // menampilkan text
    int ar[13] = {23, 75, 80, 86, 90, 100, 101, 103, 106, 199, 202,212,450}; // data array
    cin >>  n; // input angka yang dicari
    for (int i = 0; i < 13; ++i) // lopping data array
    {
    	if (ar[i] == n) // cek anggka yang dicari
    	{
    		cout << "angka " << n << " ditemukan di index " << i; // tampilkan text bila ditemukan
    		break; // stop looping
    	}else{
            cout << "angka " << n << " tidak ditemukan "; // tampilkan text bila tidak ditemukan
            break; // stop looping
        }
    }

    return 0;
}
