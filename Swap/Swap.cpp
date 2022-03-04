#include<iostream>
using namespace std;

void SwapperRef(int &int1, int &int2)
{
	int temp = int1;
	int1 = int2;
	int2 = temp;
}

void SwapperPtr(int *int1, int *int2)
{
	int temp = *int1;
	*int1 = *int2;
	*int2 = temp;
}

int main()
{
	int fr = 4;
	int sr = 6;

	int fp = 3;
	int sp = 7;

	int fs = 2;
	int ss = 8;

	SwapperRef(fr, sr);
	SwapperPtr(&fp, &sp);
	swap(fs, ss);

	cout << fr << sr << endl;
	cout << fp << sp << endl;
	cout << fs << ss << endl;

	return 0;
}