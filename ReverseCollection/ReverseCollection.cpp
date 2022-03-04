#include<iostream>
using namespace std;

string Reverse(string s)
{
	string rs = s;

	int k = 0;
	for (int i = s.length()-1; i >= 0; i--)
	{
		rs[k] = s[i];
		k++;
	}
	return rs;
}

int main()
{
	string s;
	cout << "Enter collection: ";
	cin >> s;

	cout << "Collection reversed: " << Reverse(s) << endl;

	return 0;
}