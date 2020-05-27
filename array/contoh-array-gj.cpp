#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string nim[5],nama[5],tanggal_lahir[5];

	for (int i = 0; i < 5; ++i)
	{
		
		if (i == 3 || i == 4)
		{
			nim[3] = "190030462";
			nama[3] = "cahyadi";
			tanggal_lahir[3] = "2000-10-22";
			nim[4] = "190030461";
			nama[4] = "cahyadi2";
			tanggal_lahir[4] = "2000-10-22";
		}else{
			cout <<  "nim :";
			cin >>  nim[i];
			cout <<  "nama :";
			cin >>  nama[i];
			cout <<  "tanggal lahir :";
			cin >>  tanggal_lahir[i];
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		if (i != 0)
		{
			cout <<  nim[i] << '\n';
			cout <<  nama[i] << '\n';
			cout <<  tanggal_lahir[i] << '\n';
		}
	}


	return 0;
}
