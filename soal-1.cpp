#include <iostream>
using namespace std;

int main ()
{
  int num;

  cout << "Masukkan Angka :";
  cin >> num;

  if (num % 2 == 0)
  {
    cout << "Angka Genap";
  }
  else{
    cout << "Angka Ganjil";
  }
  system("pause");

  return 0;
}


