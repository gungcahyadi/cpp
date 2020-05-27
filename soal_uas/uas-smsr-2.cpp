#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int a,b,a_maks,maks,p,n=0, search, s, m,f;
	int temp;
	int data[10]={11,17,13,45,27,21,14,15,18,22};
	string identitas="",textSelectionSort="",textBinarySearch="";

	ofstream saveFile("log_190030462.txt");

	identitas += "Nama 	: Anak Agung Gede Cahyadi Putra Palguna\n";
	identitas += "NIM 	: 190030462\n";

	cout << identitas;
	saveFile << identitas;

	textSelectionSort += "\n-------------------------------------------------\n";
	textSelectionSort += "Selection Sort";
	textSelectionSort += "\n-------------------------------------------------\n";
	textSelectionSort += "Data sebelum sort: ";

	cout << textSelectionSort;
	saveFile << textSelectionSort;
	for(a=0;a<=9;a++)
	{
		cout<<data[a]<<" ";

		saveFile << data[a]<<" ";
	}
	cout<<"\n\n";
	saveFile << "\n\n";

	for(a=9;a>=0;a--)
	{
		n = n + 1;
		cout<<n<<". ";
		saveFile << n <<". ";
		for(p=0;p<=9;p++)
		{
			cout<<data[p]<<" ";
			saveFile<<data[p]<<" ";
		}
		cout<<"\n";
		saveFile<<"\n";

		a_maks	= 0;
		maks     = data[0];

		for(b=1;b<=a;b++)
		{
			if(data[b]>maks)
			{
				a_maks = b;
				maks	 = data[b];
			}
		}

		temp			= data[a];
		data[a]  	= maks;
		data[a_maks]= temp;
	}

	cout << "\nData Setelah Sort: ";
	saveFile << "\nData Setelah Sort: ";

	for(a=0;a<=9;a++)
	{
		cout<<data[a]<<" ";
		saveFile<<data[a]<<" ";
	}

	textBinarySearch +="\n-------------------------------------------------\n";
	textBinarySearch +="Binary Search";
	textBinarySearch +="\n-------------------------------------------------\n";
	textBinarySearch +="Data yang dicari 			:";

	cout << textBinarySearch;
	saveFile << textBinarySearch;

	cin >>  search;
	saveFile << search;

	s = 0;
	f = 9;
	cout<<"\n";
	saveFile<<"\n";

	while(s <= f) {
		m = (s + f) / 2;

		if (search == data[m])
		{
			cout << "Index " << m << ": " << data[m] << " == " << search << "\n\n";
			saveFile << "Index " << m << ": " << data[m] << " == " << search << "\n\n";
			cout << "Ditemukan pada index 			:" << m;
			saveFile << "Ditemukan pada index 			:" << m;
			break;
		}else if (search > data[m])
		{
			cout << "Index " << m << ": " << data[m] << " != " << search << "\n";
			saveFile << "Index " << m << ": " << data[m] << " != " << search << "\n";
			s = m + 1;
		}
		else if (search < data[m])
		{
			cout << "Index " << m << ": " << data[m] << " != " << search << "\n";
			saveFile << "Index " << m << ": " << data[m] << " != " << search << "\n";
			f = m - 1;
		}
	}



	saveFile.close();

	return 0;

}