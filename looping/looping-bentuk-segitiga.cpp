#include <iostream>
using namespace std;

int main ()
{
	int x;
	cout << "Masukan bilangan :";
	cin >> x;
	for (int i = 0; i < x; ++i)
	{
		for (int j = i; j < x; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
  return 0;
}
