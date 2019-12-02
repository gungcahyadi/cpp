#include <iostream>
using namespace std;

int main ()
{
	int n; // deklarasi variable n
	cout << "[10,2,8,5,3]\n"; // menampilkan data array yang ada
    int ar[5] = {10,2,8,5,3}; // data array
    cin >>  n; // input angka yang dicari
    for (int i = 0; i < 5; ++i) // lopping data array
    {
    	if (ar[i] == n) // cek anggka yang dicari
    	{
    		cout << "angka " << sc << " ditemukan di index " << i; // tampilkan text bila ditemukan 
    		break; // stop program
    	}
    }

    return 0;
}
