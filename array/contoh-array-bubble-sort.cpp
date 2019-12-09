#include <iostream>
using namespace std;

int main ()
{
    int data[5] = {3,6,1,2,5};
    for (int i = 4; i >= 0; --i)
    {
    	for (int j = 0; j <= i; ++j)
        {
            int k = j+1;
            if (data[k] < data[j])
            {
                int t = data[k];
                data[k] = data[j];
                data[j] = t;
            }
        }
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << data[i] << "\n";
    }

    return 0;
}
