#include <iostream>
#include <string>
using namespace std;
int angka,lp;
string converter(int bilangan);
string smInt(int bilangan);
string mdInt(int bilangan);
string lgInt(int bilangan);
string xlInt(int bilangan);

int main ()
{
    cout << "Masukkan bilangan (1-2000000000) : ";
    cin >> angka;
    string xd = xlInt(angka);
    cout << xd << "\n";
    
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
/*
 Int 2000000000 - 1000000000
 */
string xlInt(int bilangan)
{
    int num;
    string text = "";

    if (2147483647 >= bilangan && bilangan >= 1000000000)
    {
        num = 1000000000;
        int hasil = bilangan / num;
        bilangan = bilangan % num;

        if (hasil >= 1)
        {
            text += smInt(hasil);
            text += " Miliar ";
            text += lgInt(bilangan);
        }
    }else{
        text += lgInt(bilangan);
    }

    // x = smInt(angka);
    // int hasil = angka / x;
    // angka = angka % x;

    return text;
}

/*
 Int 999999999 - 1000000
 */

string lgInt(int bilangan)
{
    int num;
    string text = "";

    if (999999999 >= bilangan && bilangan >= 1000000)
    {
        num = 1000000;
        int hasil = bilangan / num;
        bilangan = bilangan % num;

        if (hasil >= 1)
        {
            text += smInt(hasil);
            text += " Juta ";
            text += mdInt(bilangan);
        }
    }else{
        text += mdInt(bilangan);
    }

    // x = smInt(angka);
    // int hasil = angka / x;
    // angka = angka % x;

    return text;
}

/*
 Int 999999 - 1000
 */

string mdInt(int bilangan)
{
    int num;
    string text = "";

    if (999999 >= bilangan && bilangan >= 1000)
    {
        num = 1000;
        int hasil = bilangan / num;
        bilangan = bilangan % num;

        if (999 >= hasil && hasil > 1)
        {
            text += smInt(hasil);
            text += " Ribu ";
            text += smInt(bilangan);
        }
        else if(hasil == 1)
        {

            text += "Seribu ";
            text += smInt(bilangan);
        }
    }else{
        text += smInt(bilangan);
    }

    // x = smInt(angka);
    // int hasil = angka / x;
    // angka = angka % x;

    return text;
}

/*
 Int 999 - 1
 */

string smInt(int bilangan)
{
    int num;
    string text = "";

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
    }else{
        text += "Nol";
    }

    // x = smInt(angka);
    // int hasil = angka / x;
    // angka = angka % x;

    return text;
}

