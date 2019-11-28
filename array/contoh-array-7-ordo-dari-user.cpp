#include <iostream>
using namespace std;

int main ()
{
    /**
     *  Buatlah sebuah program yang menerima jumlah ordo matriks dari user, 
     *  kemudian berikan nilai pada matriks tersebut sesuai dengan jumlah ordonya, 
     *  langkah terakhir tampilkan kembali matriks yang sudah berisi nilai tersebut..
     */

    int nilai[10][10];
    int ordo,ordo2;
    cout << "Silakan masukkan Ordo 1 (baris): ";
    cin >>  ordo;
    cout << "Silakan masukkan Ordo 2 (kolom): ";
    cin >>  ordo2;

    for (int i = 0; i < ordo; ++i)
    {
        for (int j = 0; j < ordo2; ++j)
        {
            cout << "Nilai Baris ke-"<< i+1 << " Kolom ke-"<< j+1<<" : ";
            cin >> nilai[i][j];
        }
    }

    cout << "=======================\n";
    cout << "Hasilnya adalah: \n";
    cout << "=======================";
    for (int i = 0; i < ordo; ++i)
    {
        for (int j = 0; j < ordo2; ++j)
        {
            if (j == 0)
            {
                cout << "\n";
            }
            cout << nilai[i][j] << " ";
        }
    }

    return 0;
}
