#include<iostream>
using namespace std;

template<class T>
T Swap(T &a, T &b)
{
	a = a + b;
	b = a - b;
	a = a - b;

	return 0;
}

int main()
{
	int A = 3, B = 7;

	cout << "A: " << A << " , B: " << B << endl;
	Swap(A, B);
	cout << "A: " << A << " , B: " << B << endl;

	return 0;
}