#include <iostream>
using namespace std;
int hitung (int x, int y);
int main ()
{
	int bil, bil2;
	cout << "Masukan bilangan x:";
	cin >> bil;
	cout << "Masukan bilangan y:";
	cin >> bil2;
	int hasil = hitung(bil,bil2);
	cout << hasil;
  return 0;
}

int hitung (int x, int y)
{
	int hasil = 0;
	int x2 = x * x;
	int x3 = x * x * x;
	int y2 = y * y;
	int y3 = y * y * y;
	hasil = x3 + (3 * x2 * y) + (5 * x * y2) + x + y3;
  return hasil;
}
