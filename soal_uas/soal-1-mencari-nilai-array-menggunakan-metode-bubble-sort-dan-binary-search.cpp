#include <iostream>
using namespace std;

int main()
{	
	

	/**
	 * Metode Bubble sort
	 */
	int data[9] = {2,4,1,3,8,10,7,5,6};
	for (int i = 8; i >= 0; --i)
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

	cout << "Terdapat data : ";

	for (int i = 0; i <= 8; ++i)
	{
		if (i > 0)
		{
			cout << ",";
		}
		cout << data[i];
	}

	/**
	 * Metode Binary Search
	 */
	int nilai,middle,start=0,finish=8;
	cout << "\n";
	cout << "Cari data : ";
	cin >> nilai;
	cout << "\n";

    while(start <= finish) {
        middle = (start + finish) / 2;  // 4

        if (nilai > data[middle])
        {
            start = middle + 1;
        }
        else if (nilai < data[middle])
        {
            finish = middle - 1;
        }
        else if (nilai == data[middle])
        {
            cout << "Data ditemukan pada index ke " << middle;
            break;
        }
        
        if (middle >= 8)
        {
        	cout << "Data tidak ditemukan";
        }
    }

    

    return 0;

}