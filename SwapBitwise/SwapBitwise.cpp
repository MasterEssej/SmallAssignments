#include<iostream>
using namespace std;

void ToggleBit(int& number, int n)
{
	number ^= 1UL << n;
}

int GetBit(int number, int n)
{
	return (number >> n) & 1U;
}

void Swap(int& num1, int& num2)
{
	for (int i = 0; i < 32; i++)
	{
		if (GetBit(num1, i) != GetBit(num2, i))
		{
			ToggleBit(num1, i);
			ToggleBit(num2, i);
		}
	}
}

int main()
{
	int number1 = 512;
	int number2 = 5;

	cout << number1 << " , " << number2 << endl;

	Swap(number1, number2);

	cout << number1 << " , " << number2 << endl;

	return 0;
}