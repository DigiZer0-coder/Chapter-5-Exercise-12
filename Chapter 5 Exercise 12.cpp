#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	srand(time(0));
	int randomNum = rand() % 101;
	int userGuess;

	cout << "Guess a number between 1 and 100: ";
	cin >> userGuess;

	if (userGuess == randomNum)
	{
		cout << "Congratulations! You guessed the number!" << endl;
	}
	while (userGuess != randomNum)
	{
		if (userGuess < randomNum)
		{
			cout << "Too low! Try again: ";
		}
		else
		{
			cout << "Too high! Try again: ";
		}
		cin >> userGuess;
		if (userGuess == randomNum)
		{
			cout << "Congratulations! You guessed the number!" << endl;
			break;
		}
	}
}
