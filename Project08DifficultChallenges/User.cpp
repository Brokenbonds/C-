#include "User.h"
#include <string>
#include <iostream>

using namespace std;

User::User() //this is a constructor, it could also be put in the class to simplify things.
{
	cout << "Enter your First Name: ";
	cin >> FirstName;
	cout << "Enter your Last Name: ";
	cin >> Lastname;
	cout << "Enter your User number: ";
	cin >> userNumber;
	cout << "are they currently working? yes or no: ";
	string answer;
	bool answerCorrectly = false;
	cin >> answer;
	while (!answerCorrectly) {
		if (answer == "yes") {
			isWorking = true;
			answerCorrectly = true;

		}
		else if (answer == "no") {
			isWorking = false;
			answerCorrectly = true;
		}
		else {
			cout << "please type yes or no";
		}
	}
}


void userReport(User user) 
{
	cout << "First Name: " << user.FirstName <<'\n';
	cout << "Last Name: " << user.Lastname << '\n';
	cout << "User Number: " << user.userNumber << '\n';
	string result = (user.isWorking) ? "Is currently working" : "Isn't currently working";
	cout << "Working: " << result << '\n';
}
