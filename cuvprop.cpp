#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char cuv[100];
	cout << "cuvant: ";
	cin.getline(cuv, 100);

	char prop[100];
	cout << "propozitie: ";
	cin.getline(prop, 100);

	int lgcuv, lgprop;
	lgcuv = strlen(cuv);
	lgprop = strlen(prop);

	if (lgcuv > lgprop)
	{
		cout << "NU";
		return 0;
	}

	char *ptr = strchr(prop, cuv[0]);

	if (!ptr)
	{
		cout << "NU";
		return 0;
	}

	int i;

	for (i = 1; ptr; i++)
	{
		ptr = strchr(ptr+1, cuv[i]);
	}

	if (!ptr && i <= lgcuv)
	{
		cout << "NU";
		return 0;
	}

	cout << "DA";

	return 0;
}
// sol proprie
