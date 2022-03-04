#include<iostream>
using namespace std;

int Diff(int a, int b)
{
	return abs(a - b);
}

int main()
{
	int int1;
	int int2;
	cout << "Enter 2 integers" << endl;

	cout << "First integer: ";
	cin >> int1;

	cout << "Second integer: ";
	cin >> int2;

	cout << "The difference between the integers is: " << Diff(int1, int2);

	return 0;
}