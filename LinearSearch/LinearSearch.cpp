#include<iostream>
#include<vector>
using namespace std;

int Search(vector<int> v, int n)
{
	int notFound = -1;

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == n)
		{
			return i;
		}
	}

	return notFound;
}

int main()
{
	vector<int> Collection = {5, 3, 6, 1, 8};
	cout << "Collection: ";
	for (int i = 0; i < Collection.size(); i++)
	{
		cout << Collection[i];
	}

	int sNum;
	cout << "\nSearch for a number in the collection: " << endl;
	cin >> sNum;

	if (Search(Collection, sNum) >= 0)
	{
		cout << "The number " << sNum << " was found at position " << Search(Collection, sNum) << " in the collection." << endl;
	}
	else
	{
		cout << "The number " << sNum << " was not found in the collection." << endl;
	}

	return 0;
}