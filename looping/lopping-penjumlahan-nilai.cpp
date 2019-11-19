#include <iostream>
using namespace std;

int main ()
{
	int bil, bil2,hasil=0;
	cout << "Masukan bilangan 1:";
	cin >> bil;
	cout << "Masukan bilangan 2:";
	cin >> bil2;
	for (int i = 0; i < bil; ++i)
	{
		hasil += bil2;
	}
	cout << "hasilnya adalah " << hasil;
  return 0;
}
