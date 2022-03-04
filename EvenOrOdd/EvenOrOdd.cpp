#include<iostream>
using namespace std;

bool CheckEven(int i)
{
	int f = i % 2;

	if (f == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int temp;
	cout << "Integer: ";
	cin >> temp;

	if (CheckEven(temp))
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}

	return 0;
}