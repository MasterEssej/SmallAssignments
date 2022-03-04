#include<iostream>
using namespace std;

float converter(float c)
{
	return c * 1.8 + 32;
}

int main()
{
	int tempc;
	cout << "Celsius: ";
	cin >> tempc;

	cout << tempc << " degrees celsius is " << converter(tempc) << " degrees fahrenheit.";

	return 0;
}