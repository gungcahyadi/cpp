#include <iostream>
#include <string>
using namespace std;
  int a,b,z;

int hitung(int a,int b);

int main ()
{
  a = 2;
  b = 5;
  z = hitung(a,b);
  cout << z;
  return 0;
}

int hitung(int a,int b){
  int t;
  a = a = 2;
  b = b = 2;
  t = a + b;
  return t;
}

