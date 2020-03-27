#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int arr[4];
int main ()
{    
	system("clear");
	for (int i = 0; i < 4; ++i)
	{
		cout << "Data ke-" << i+1 << ":";
		cin >> arr[i];
	}
	cout << "Ini adalah array 1 dimensi :";
	for (int i = 0; i < 4; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
