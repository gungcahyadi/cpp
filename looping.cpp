#include <iostream>
#include <string>
using namespace std;

int main (){
    int num,num2;

    cout << "bil 1\n";
    cin >> num;
    cout << "bil 2\n";
    cin >> num2;

    int hasil = 0;

    for (int i = 1; i <= num2; ++i)
    {
        hasil += num;
    }    
    cout << hasil;
}

