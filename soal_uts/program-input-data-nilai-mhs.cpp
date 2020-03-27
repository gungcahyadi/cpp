#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
string nama[5],nilai[5],hasil[5];
double tugas[5],quiz[5],uts[5],uas[5],absen=90.10,total[5]; 

int main ()
{

	system("clear");
	cout << "Nama 	: Anak Agung Gede Cahyadi Putra Palguna \n";
	cout << "NIM 	: 190030462\n";
	cout << "-------------------------------------\n";

	for (int i = 0; i < 5; ++i)
	{
		// input data
		cout << "Nama Mahasiswa : ";
		cin >> nama[i];
		cout << "Tugas : ";
		cin >> tugas[i];
		cout << "Quiz : ";
		cin >> quiz[i];
		cout << "UTS : ";
		cin >> uts[i];
		cout << "UAS : ";
		cin >> uas[i];
		cout << "\n-------------------------------------\n";		

		// formula
		total[i] = (tugas[i] * 0.1) + (quiz[i] * 0.1) + (uts[i] * 0.25) + (uas[i] * 0.40) + (absen * 0.15);
		if (100 >= total[i] && total[i] >= 86)
		{
			nilai[i] = "A";
			hasil[i] = "Lulus";
		}
		else if (86 > total[i] && total[i] >= 71)
		{
			nilai[i] = "B";
			hasil[i] = "Lulus";
		}
		else if (71 > total[i] && total[i] >= 56)
		{
			nilai[i] = "C";
			hasil[i] = "Lulus";
		}

		else if (56 > total[i] && total[i] >= 41)
		{
			nilai[i] = "D";
			hasil[i] = "Gagal";
		}
		else 
		{
			nilai[i] = "E";
			hasil[i] = "Gagal";
		}

		
		cout << "\nNim : " << "19001000" << i+1;
		cout << "\nNama : " << nama[i];
		cout << "\nTugas : " << tugas[i];
		cout << "\nQuiz : " << quiz[i];
		cout << "\nUTS : " << uts[i];
		cout << "\nUAS : " << uas[i];
		cout << "\n-------------------------------------\n";
		cout << "Hello ... " << nama[i];
		cout << "\nAnda " << hasil[i];
		cout << "\nNilai Anda " << total[i] << " | " << nilai[i];
		cout << "\n-------------------------------------\n";
		
	}

	cout << "Daftar nilai dalam array\n";
	cout << "-------------------------------------\n";

	for (int i = 0; i < 5; ++i)
	{
		cout << "19001000" << i+1 << " : " << total[i] << " | " << nilai[i] << "\n";
	}
	cout << "-------------------------------------\n";



	return 0;
}
