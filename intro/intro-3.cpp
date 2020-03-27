#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
char ulangi[1];
double tugas,quiz,uts,uas,absen,total; 
int main ()
{
	do
	{
	system("clear");	

    cout << "Tugas : ";
    cin >> tugas;
    cout << "Quiz : ";
    cin >> quiz;
    cout << "UTS : ";
    cin >> uts;
    cout << "UAS : ";
    cin >> uas;
    absen = 100;
    total = (tugas * 0.1) + (quiz * 0.1) + (uts * 0.25) + (uas * 0.40) + (absen * 0.15);
    cout << "\n-------------------";
    cout << "\nTugas : " << tugas;
    cout << "\nQuiz : " << quiz;
    cout << "\nUTS : " << uts;
    cout << "\nUAS : " << uas;
    cout << "\nAbsen : " << absen;
    cout << "\nTotal : " << total;

    if (total > 85 && total <= 100)
    {
    	cout << "\nGrade : A";
    	cout << "\nAnda Lulus";
    }
    else if (total > 70 && total <= 85)
    {
    	cout << "\nGrade : B";
    	cout << "\nAnda Lulus";
    }
    else if (total > 55 && total <= 70)
    {
    	cout << "\nGrade : C";
    	cout << "\nAnda Lulus";
    }

    else if (total > 40 && total <= 55)
    {
    	cout << "\nGrade : D";
    	cout << "\nAnda Tidak Lulus";
    }
    else 
    {
    	cout << "\nGrade : E";
    	cout << "\nAnda Tidak Lulus";
    }

    cout << "Ingin Mengulangi ? (Y/N)";
    cin >> ulangi[1];

    } while (ulangi[1] == 'Y');

    return 0;
}
