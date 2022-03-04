#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main()
{
	bool game = true;
	while (game)
	{
		srand(time(NULL));
		int secretNum = rand() % 15 + 1;
		string num = to_string(secretNum);
		bool correct = false;
		string guess;
		int tries = 0;

		system("cls");
		cout << "Guess the number between 1 and 15." << endl;

		while (correct == false)
		{
			cout << "Guess: ";
			cin >> guess;

			tries++;

			if (guess == num)
			{
				cout << "\nCorrect! The number was " << num << endl;
				cout << "Tries: " << tries << "\n" << endl;
				correct = true;
			}
			else
			{
				cout << "Wrong." << endl;
			}
		}

		system("pause");

		bool PlayAgain = true;
		string choice;
		bool answer = false;
		while (answer == false)
		{
			system("cls");
			cout << "Play again? (1/2)\n1. Yes\n2. No" << endl;
			cin >> choice;
			if (choice == "1")
			{
				answer = true;
			}
			else if (choice == "2")
			{
				answer = true;
				game = false;
			}
		}

	}
	return 0;
}