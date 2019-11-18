#include <iostream>
#include <string>
using namespace std;

int main ()
{
	// Mengubah definisi array yang sudah ditemukan

    string cars[4] = {"Volvo","BMW","Ford","Mazda"}; // Memberi nilai
    cars[0] = "Opel";
    cout << cars[0];

    return 0;
}
