#include<iostream>
#include<map>
#include<string>
using namespace std;

void CharOccurM(string s)
{
	map<char, int> m;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			m[toupper(s[i])]++;
		}
	}

	cout << endl;
	for (auto& x: m)
	{
		cout << x.first << ": " << x.second << endl;
	}
}

void CharOccurA(string str)
{
	char table[2][25];
	fill_n(table[0], 25, '0');
	fill_n(table[1], 25, '0');
	char* chr = new char[str.length()+1];
	strcpy_s(chr, str.size() + 1, str.c_str());

	for (int i = 0; i < str.length(); i++)
	{
		int temp = toupper(chr[i]) - 65;
		if (temp >= 0)
		{
			table[0][temp] = toupper(chr[i]);
			table[1][temp] = (int)table[1][temp] + 1;
		}
	}

	cout << endl;
	for (int k = 0; k < 25; k++)
	{
		if (table[0][k] != '0')
		{
			cout << table[0][k] << ": " << table[1][k] << endl;
		}
	}
}

int main()
{
	string s;
	getline(cin, s);
	CharOccurA(s);

	return 0;
}