#include <iostream>
using namespace std;

int main ()
{
  int bilangan1,bilangan2,bilangan3;

  cout << "Masukkan Bilangan 1 : ";
  cin >> bilangan1;
  cout << "Masukkan Bilangan 2 : ";
  cin >> bilangan2;
  cout << "Masukkan Bilangan 3 : ";
  cin >> bilangan3;

  if (bilangan1 > bilangan2 && bilangan1 > bilangan3)
  {
    cout << "Bilangan " <<  bilangan1 <<" Besar";
  }
  else if (bilangan2 > bilangan1 && bilangan2 > bilangan3){
    cout << "Bilangan "<< bilangan2 <<" Besar";
  }
  else if (bilangan3 > bilangan2 && bilangan3 > bilangan1){
    cout << "Bilangan "<< bilangan3 <<" Besar";
  }
  system("pause");

  return 0;
}


