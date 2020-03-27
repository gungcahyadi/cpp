#include <iostream>
#include <string>
using namespace std;

char nama[30];

int main ()
{
    
    cout << "Nama :";
    // ini digunakan untuk inputan standar, namun hanya bisa 1 kata saja
    // cin >> nama;
    // ini digunakan agar bisa space masuk
    cin.getline(nama,30);

    cout << "--------------------\n";
    cout << "Hai, " << nama;
    return 0;
}
