#include<iostream>
using namespace std;

void SetBit(int &number, int n)
{
	number |= 1UL << n;
}

int GetBit(int number, int n)
{
	return (number >> n) & 1U;
}

int main()
{
	int num = 12;
	cout << "(" << num << ")" << GetBit(num, 0) << GetBit(num, 1) << GetBit(num, 2) << GetBit(num, 3) << "\n--------" << endl;

	SetBit(num, 1);
	cout << "(" << num << ")" << GetBit(num, 0) << GetBit(num, 1) << GetBit(num, 2) << GetBit(num, 3) << "\n--------" << endl;

	return 0;
}