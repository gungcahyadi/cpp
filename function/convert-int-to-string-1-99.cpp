#include <iostream>
#include <string>
using namespace std;
int angka, sisa_bagi, hasil_bagi;
void converter(int bilangan);

int main ()
{
  cout << "Masukkan bilangan : ";
  cin >> angka;
  hasil_bagi = angka / 10;
  sisa_bagi = angka % 10;

  if (hasil_bagi == 1)
  {    
    if (sisa_bagi == 0)
    {
      cout << "Sepuluh";
    }
    else if (sisa_bagi == 1){
      cout << "Sebelas";
    }
    else{
      converter(sisa_bagi);
      cout << " Belas ";
    }
  }else if (sisa_bagi == 0){
    converter(hasil_bagi);
    cout << " Puluh ";
  }
  else{
    converter(hasil_bagi);
    cout << " Puluh ";
    converter(sisa_bagi);
  }
  return 0;
}

void converter(int bilangan){
  string text;
  switch(bilangan) {
    case 1:
    text =  "Satu";
    break;

    case 2:
    text =  "Dua";
    break;

    case 3:
    text =  "Tiga";
    break;

    case 4:
    text =  "Empat";
    break;

    case 5:
    text =  "Lima";
    break;

    case 6:
    text =  "Enam";
    break;

    case 7:
    text =  "Tujuh";
    break;

    case 8:
    text =  "Delapan";
    break;

    case 9:
    text =  "Sembilan";
    break;

    default :
    text =  "";
  }

  cout << text;
}

