#include <iostream>
using namespace std;

int main()
{	

	int nilai[10][10];
	int nilai2[10][10];
    int o1,o2;

    cout << "Ordo 1 (baris): ";
    cin >>  o1;
    cout << "Ordo 2 (kolom): ";
    cin >>  o2;

    cout << "\n";
    cout << "\n";
    cout << "Input Matriks Pertama " << o1 << "x" << o2 << "\n";
    cout << "=======================";
    cout << "\n";    
    for (int i = 0; i < o1; ++i) 
    {
        for (int j = 0; j < o2; ++j) 
        {
            cout << "Nilai Baris ke-"<< i+1 << " Kolom ke-"<< j+1<<" : ";
            cin >> nilai[i][j];
        }
    }
    cout << "\n";
    cout << "=======================\n";
    cout << "Hasil Matriks Pertama Ordo " << o1 << "x" << o2 << "\n";
    cout << "=======================";
    for (int i = 0; i < o1; ++i) 
    {
        for (int j = 0; j < o2; ++j) 
        {
            if (j == 0)
            {
                cout << "\n";
            }
            cout << nilai[i][j] << " ";
        }
    }

    cout << "\n";
    cout << "\n";
    cout << "Input Nilai Matriks Kedua " << o1 << "x" << o2 << "\n";
    cout << "=======================";
    cout << "\n";
    for (int i = 0; i < o1; ++i) 
    {
        for (int j = 0; j < o2; ++j) 
        {
            cout << "Nilai Baris ke-"<< i+1 << " Kolom ke-"<< j+1<<" : ";
            cin >> nilai2[i][j];
        }
    }
    cout << "\n";
    cout << "=======================\n";
    cout << "Hasil Matriks Kedua Ordo " << o1 << "x" << o2 << "\n";
    cout << "=======================";
    for (int i = 0; i < o1; ++i) 
    {
        for (int j = 0; j < o2; ++j) 
        {
            if (j == 0)
            {
                cout << "\n";
            }
            cout << nilai2[i][j] << " ";
        }
    }
    cout << "\n";
    cout << "\n";
    cout << "=======================\n";
    cout << "Hasil Penjumlahan Matriks\n";
    cout << "=======================\n";

    for (int i = 0; i < o1; ++i) 
    {
        for (int j = 0; j < o2; ++j) 
        {
            if (j == 0)
            {
                cout << "\n";
            }
            cout << nilai[i][j] + nilai2[i][j] << " ";
        }
    }



    return 0;

}