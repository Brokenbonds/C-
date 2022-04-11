#pragma once
#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
	string Breed;
	string Color;
	string Height;
	string Weigh;

	void Shake()
	{
		cout << "The dog shakes";
	}

	void Sit() {
		cout << "The dog sits";
	}

	void Laydown() {
		cout << "The dog lays down";
	}



};