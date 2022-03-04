#include<iostream>
using namespace std;

void Fibonacci(int num);
int FibonacciRec(int num);

int main()
{
	Fibonacci(100);

	return 0;
}

void Fibonacci(int num)
{
	int last = 1;

	cout << 0 << ", " << last;
	for (int i = 1; i <= num; i += last)
	{
		cout << ", " << i;
		last = i;
	}
	cout << " (" << num << ")" << endl;
}

int FibonacciRec(int num)
{

}