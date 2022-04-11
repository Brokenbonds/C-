// Project07HarderChallanges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Hello World!\n";
	cout << max(5, 10) << '\n';
	cout << sqrt(81) << '\n';
	cout << round(32.5) << '\n';
	cout << pow(2, 6) << '\n';

	cout << "is your name Phil? yes or no?\n";
	string answer;
	getline(cin, answer);
	if (answer == "yes") {
		cout << "hey phil\n";
		name = "phil";
	}
	else if (answer == "no"){
		cout << "oh what is your name?\n";
		cin >> name;
	}
	else {
		cout << "um... I asked for your name not whatever \"" << answer << "\" is...\n";
		name = "sombody";
	}

	cout << "lets continue " + name + " I've got number between 1-10 take a guess. No decimals.\n";

	bool keepGuessing = true;
	int guess;
	while (keepGuessing) {
		cin >> guess;
		switch (guess) {
			case 0:
				cout << "this isn't a number between 1-10\n";
			break;

			case 1:
				cout << "Nope, try again.\n";
				break;
			case 2:
				cout << "Nope, try again.\n";
				break;
			case 3:
				cout << "Nope, try again.\n";
				break;
			case 4:
				cout << "Nope, try again.\n";
				break;
			case 5:
				cout << "Nope, try again.\n";
				break;
			case 6:
				cout << "HEY! YOU GOT IT!\n";
				keepGuessing = false;
				break;
			case 7:
				cout << "Nope, try again.\n";
				break;
			case 8:
				cout << "Nope, try again\n.";
				break;
			case 9:
				cout << "Nope, try again\n.";
				break;
			case 10:
				cout << "Nope, try again.\n";
				break;
		}
	}


	cout << "Hey " + name + " you haveing a good time? yes or no?";
	cin >> answer;
	string response = (answer == "yes") ? "That's Great!" : "Oh man, well. this is all there is.";
	cout << response;
	int x = 0;
	bool done = false;
	do {
		
		cout << x << '\n';
		x++;
		if (x == 10) {
			done = true;
		}
		// this will not print out 10
	} while (done == false); 


	for (int j = 0; j <= 10; j++) {
		cout << "we have run this " << j << " times\n";
	}
	cout << '\n';
	for (int j = 0; j <= 10; j++) {
		if (j == 4) {
			break;
		}
		cout << "we have run this " << j << " times\n";
	}
	cout << '\n';

	for (int j = 0; j <= 10; j++) {
		if (j == 6) {
			continue;
		}
		cout << "we have run this " << j << " times\n";
	}

	string nameList[4] { "phil" ,"gabi", "elena", "sophia",};

	cout << nameList[3] << " is the 4th name in the list of names" << '\n';

	for (auto n : nameList) {
		cout << n << '\n';
	}

	int enginpower = 200;
	int& zoom = enginpower;
	enginpower += 200;
	cout << zoom << '\n';
	cout << enginpower << '\n';

}