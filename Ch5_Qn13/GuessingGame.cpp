#include "GuessingGame.h"
#include<iostream>
#include<cstdlib>
using namespace std;

void GuessingGame::generateRandomNumber()
{
	srand((unsigned)time(NULL)); // I found this code online and I quite like it, let me know if you would rather me using the book provided layout of random number generation though.

	randomNumber = 1 + (rand() % 100);

}

void GuessingGame::initiateGame()
{
	cout << "Please enter your guess between 1-100: " << endl;

	int guess = -1;
	cin >> guess;

	while (!(guess == randomNumber))
	{
		if (guess > randomNumber)
		{
			cout << "Too high. Please try again." << endl;
			cin >> guess;
		}
		else if (guess < randomNumber)
		{
			cout << "Too low. Please try again." << endl;
			cin >> guess;
		}
	}

	if (guess == randomNumber)
	{
		cout << "Congratulations, you figured out my number!";
	}
}
