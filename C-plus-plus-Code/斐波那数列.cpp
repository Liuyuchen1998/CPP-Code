#include<iostream>
using namespace std;

void main()
{
	int f1 = 0, f2 = 1, f;
	cout << "fibbonaÊýÁÐ:\n";
	cout << f1 << ',' << f2;

	for (int i = 3; i <= 20; i++)
	{
		f = f1 + f2;
		cout << ',' << f;
		if (i % 5 == 0)
			cout << endl;
		f1 = f2;
		f2 = f;

	}
	cout << endl;
}