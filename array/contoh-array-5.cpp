#include <iostream>
using namespace std;

int main ()
{
    // input array dari user & melakukan pencarian index dengan nilai terinput

    int nilai[10];
    int key;
    cout << "Silakan masukkan nilai: \n";
    for (int i = 0; i < 10; ++i)
    {
        cin >> nilai[i];
    }
    cout << "Hasilnya adalah: ";
    for (int i = 0; i < 10; ++i)
    {
        if (i == 9){
            cout << nilai[i] << "\n";
        }else{            
            cout << nilai[i] << ", ";
        }
    }

    cout << "Pencarian nilai: ";
    cin >> key;

    for (int i = 0; i < 10; ++i)
    {
        if (key == nilai[i])
        {
            cout << "Nilai "<< nilai[i] << " berada di index " << i;
        }
    }


    return 0;
}
