// Project03GuessMyNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float guess = 0.0;
	float myNumber = 26.0;
	bool keepgoing = true;

	cout << "Try to guess the number I'm thinking of.\nOne hint: it's between 0 and 50. \nGood luck\n";

	while (keepgoing)
	{
		cin >> guess;
		if (guess > myNumber) 
		{
			cout << "sorry this is to high, please try again\n";
			
		}
		else if (guess < myNumber)
		{
			cout << "sorry this is to low, please try again\n";
		}
		else
		{
			cout << "You guessed it!\n";
			keepgoing = false;
		}
	}

	return 0;

	
	





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
