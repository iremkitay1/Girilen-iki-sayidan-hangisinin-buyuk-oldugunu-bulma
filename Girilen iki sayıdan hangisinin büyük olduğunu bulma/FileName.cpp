#include <iostream>
using namespace std;
int main()
{
	int sayi1, sayi2;
	cout << "Birinci sayiyi giriniz : ";
	cin >> sayi1;
	cout << "�kinci sayiyi giriniz : ";
	cin >> sayi2;

	if (sayi1 == sayi2)
	{
		cout << "Sayilar esittir. " << endl;
	}
	else if (sayi1 < sayi2)
	{
		cout << "�kinci sayi buyuktur. " << endl;
	}
	else if (sayi1 > sayi2)
	{
		cout << "Birinci sayi buyuktur. " << endl;
	}

	return 0;
}