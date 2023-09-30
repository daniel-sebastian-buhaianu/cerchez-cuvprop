#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char c[30], p[1000], *poz;

	cin.getline(c, sizeof(c));
	
	cin.getline(p, sizeof(p));

	poz = p;

	for (int n = strlen(c), i = 0; poz && i < n; i++)
	{
		poz = strchr(poz, c[i]);
	}

	if (poz)
	{
		cout << "DA";
	}
	else
	{
		cout << "NU";
	}

	return 0;
}
// sol oficiala
