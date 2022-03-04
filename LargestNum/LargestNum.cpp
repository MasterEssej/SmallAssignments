#include<iostream>
using namespace std;

template <class T>
T CheckGreater(T a, T b)
{
	return(a > b ? a : b);
}

int main()
{
	int i, j, k;
	cin >> i;
	cin >> j;
	k = CheckGreater(i, j);
	cout << "----\n" << k << endl;

	return 0;
}