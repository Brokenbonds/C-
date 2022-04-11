#pragma once
#include<string>
#include <iostream>

using namespace std;

class User {
protected:
	string City = "Chilliwack";
private:
	int numbers = 25;
	bool isSet = true;
public:
	string FirstName = "";
	string Lastname = "";
	bool isWorking = false;
	int userNumber = 0;
	User();

	void userNameChange() {
		cout << "Ok lets redo you name\n";
		cout << "Enter your First Name: ";
		cin >> FirstName;
		cout << "Enter your Last Name: ";
		cin >> Lastname;
	}
	

};

class Tools {
public:
	string toolList[4]{ "keyboard","mouse","PC","Monitor" };
	string anotherstring;

	void readDesktype() {
		cout << Desktype;
	}
protected:
	string Desktype = "large";

};

class Admin : public User, public Tools {
public:
	int adminNumber;
	string position;
	string &desk = Desktype;
	void userNameChange() {
		cout << "Ok lets redo you name\n";
		cout << "Enter your First Name: ";
		cin >> FirstName;
		cout << "Enter your Last Name: ";
		cin >> Lastname;
		cout << "what is your position: ";
		cin >> position;
	}

};

class Owner : public Admin {
public:
	bool isOwner = true;
};


void userReport(User user);

