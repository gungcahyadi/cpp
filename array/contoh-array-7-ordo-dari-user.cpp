/**
 *  Buatlah sebuah program yang menerima jumlah ordo matriks dari user, 
 *  kemudian berikan nilai pada matriks tersebut sesuai dengan jumlah ordonya, 
 *  langkah terakhir tampilkan kembali matriks yang sudah berisi nilai tersebut..
 */

/**
 * PENULISAN HEADER STANDAR
 */
#include <iostream> // memanggil standar library iostream
using namespace std; // ini adalah sebuah penyingkat atau penyederhana dari notasi yang ada dalam Library iostream
int main () // ini adalah fungsi utama program (body)
{
    /**
     * DEKLARASIKAN VARIABLE
     */
    int nilai[10][10]; // mendeklarasikan variable nilai dengan array 2 dimensi yang masing masing memiliki 10 index
    int ordo,ordo2; // deklarasikan variable ordo 1 dan ordo 2
    /**
     * MEMINTA USER UNTUK MENGINPUTKAN JUMLAH ORDO
     */
    cout << "Silakan masukkan Ordo 1 (baris): "; // untuk menampilkan text (Silakan masukkan Ordo 1 (baris): )
    cin >>  ordo; // untuk input ordo 1 dari user
    cout << "Silakan masukkan Ordo 2 (kolom): "; // untuk menampilkan text (Silakan masukkan Ordo 2 (kolom): )
    cin >>  ordo2; // untuk input ordo 2 dari user
    /**
     * PROSES INPUT NILAI DARI JUMLAH INPUT ORDO DARI USER
     */
    for (int i = 0; i < ordo; ++i) { // fungsi looping berdasarkan dari nilai ordo 1
        for (int j = 0; j < ordo2; ++j) { // fungsi looping berdasarkan dari nilai ordo 2
            cout << "Nilai Baris ke-"<< i+1 << " Kolom ke-"<< j+1<<" : "; // untuk menampilkan text ( baris ke berapa kolom ke berapa )
            cin >> nilai[i][j]; // untuk input nilai
        }
    }
    /**
     * MENAMPILKAN HASIL NILAI DARI INPUT USER
     */
    cout << "=======================\n"; // untuk menampilkan text (dekorasi)
    cout << "Hasilnya adalah: \n"; // untuk menampilkan text (Hasilnya adalah :)
    cout << "======================="; // untuk menampilkan text (dekorasi)
    for (int i = 0; i < ordo; ++i) { // fungsi looping berdasarkan dari nilai ordo 1 
        for (int j = 0; j < ordo2; ++j) { // fungsi looping berdasarkan dari nilai ordo 2
            if (j == 0){ // cek kondisi, bila nilai j sama dengan 0 maka diberikan enter
                cout << "\n"; // memberikan enter
            }
            cout << nilai[i][j] << " "; // menampilkan nilai
        }
    }
    return 0; // mengembalikan nilai balik
}
