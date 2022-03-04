#include<iostream>
using namespace std;

bool PalCheck(string s)
{
	int k = s.length()-1;
	for (int i = 0; i < s.length()/2; i++)
	{
		if (s[i] != s[k])
		{
			return false;
		}
		k--;
	}

	return true;
}

bool PalCheckRec(string s, int i = 0)
{
	int compare = s.size()-1-i;
	if (i < compare)
	{
		if (s[i] != s[compare])
		{
			return false;
		}
		PalCheckRec(s, i + 1);
	}
	return true;
}

int main()
{
	string input;
	cout << "Enter word: ";
	cin >> input;

	if (PalCheck(input))
	{
		cout << "The word \"" << input << "\" is a palindrome." << endl;
	}
	else
	{
		cout << "The word \"" << input << "\" is not a palindrome." << endl;
	}

	return 0;
}