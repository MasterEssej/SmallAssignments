#include<iostream>
#include<string>
using namespace std;

string MMSA(int arr[], int size)
{
	int min = arr[0];
	int max = arr[0];
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	float mean = (float)sum / size;

	string result = "Min: " + to_string(min) + ", Max: " + to_string(max) + ", Sum: " + to_string(sum) + ", Mean: " + to_string(mean);
	return result;
}

int main()
{
	int intArr[5] = {27, 5, 13, 2, 31};

	cout << MMSA(intArr, 5) << endl;

	return 0;
}