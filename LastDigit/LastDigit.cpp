#include<iostream>
#include<string>
using namespace std;

char LastDig(int i)
{
	string temp = to_string(i);

	return temp[temp.length() - 1];
}

int main()
{
	int temp;
	cout << "Enter integer: ";
	cin >> temp;

	cout << "Last digit: " << LastDig(temp) << endl;

	return 0;
}