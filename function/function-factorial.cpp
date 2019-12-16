#include <iostream>
using namespace std;

int myFaktorial(int angka)
{
    if(angka==1)
    {
        return 1;
    }
    else
    {
        return angka*myFaktorial(angka-1); 
    }
}

int main ()
{
    int angka;
    cout << "Masukkan bilangan : ";
    cin >> angka;
    int hasil = myFaktorial(angka);
    cout << hasil << "\n";
    
    return 0;
}

