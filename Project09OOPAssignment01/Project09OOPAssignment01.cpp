// Project09OOPAssignment01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Dog.h"

using namespace std;

int main()
{
	Dog dog;
	dog.Breed = "Hound";
	dog.Color = "Brown";
	dog.Height = "2 feet";
	dog.Weigh = "60 pounds";

	dog.Shake();
	cout << '\n';
	dog.Sit();
	cout << '\n';
	dog.Laydown();

}

