#include <iostream>
#include <string>
using namespace std;
int angka;
string converter(int bilangan);
string getType(int bilangan);

int main ()
{
    cout << "Masukkan bilangan (1-9999) : ";
    cin >> angka;
    string xd = getType(angka);
    cout << xd;
    return 0;
}

string converter(int bilangan)
{
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

    return text;
}

string getType(int bilangan)
{
    int num;
    string text = "";

    if (9999 >= bilangan && bilangan >= 1000)
    {
        num = 1000;
        int hasil = bilangan / num;
        bilangan = bilangan % num;

        if (hasil != 1)
        {
            text += converter(hasil);
            text += " Ribu ";
        }
        else if(hasil == 1)
        {
            text += "Seribu ";
        }        
    }

    if (999 >= bilangan && bilangan >= 100)
    {
        num = 100;
        int hasil = bilangan / num;
        bilangan = bilangan % num;

        if (hasil != 1)
        {
            text += converter(hasil);
            text += " Ratus ";
        }
        else if(hasil == 1)
        {
            text += "Seratus ";
        }        
    }

    if (99 >= bilangan && bilangan >= 10)
    {
        num = 10;
        int hasil = bilangan / num;
        bilangan = bilangan % num;

        if (hasil != 1)
        {
            text += converter(hasil);
            text += " Puluh ";
        }
        else if(hasil == 1)
        {
            if (bilangan == 0)
            {
                text += "Sepuluh";
                bilangan = 0;
            }
            else if (bilangan == 1)
            {
                text += "Sebelas";
                bilangan = 0;
            }else
            {
                text += converter(bilangan);
                text += " Belas";
                bilangan = 0;
            }
        }        
    }

    if (9 >= bilangan && bilangan >= 1)
    {
        text += converter(bilangan);
    }

    // x = getType(angka);
    // int hasil = angka / x;
    // angka = angka % x;

    return text;
}

