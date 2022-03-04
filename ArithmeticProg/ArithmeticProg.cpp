#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

bool CheckProg(string s)
{
	istringstream iss(s);
	vector<int> numbers{};
	string num;

	while (iss >> num)
	{
		numbers.push_back(stoi(num));
	}

	for (int i = numbers.size() - 1; i > 1; i--)
	{
		if (numbers[i] - numbers[i-1] != numbers[i-1] - numbers[i-2])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	string input;
	cout << "Enter a series of numbers. (Separate using space)" << endl;
	getline(cin, input);

	if (CheckProg(input))
	{
		cout << "The series has arithmetic progression." << endl;
	}
	else
	{
		cout << "The series does not have arithmetic progression." << endl;
	}

	return 0;
}