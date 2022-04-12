// Project09OOPAssignment02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

int main()
{

	Rectangle rect;\
	cout << "Rectangle color: ";
	cin >> rect.Color;
	cout << "Rectangle hieght: ";
	cin >> rect.height;
	cout << "Rectangle width: ";
	cin >> rect.width;
	cout << "Your " << rect.Color << " Rectangle area is: " << rect.getArea();

	cout << '\n';
	cout << '\n';

	Triangle tri;
	cout << "Triangle color: ";
	cin >> tri.Color;
	cout << "Triangle hieght: ";
	cin >> tri.height;
	cout << "Triangle base: ";
	cin >> tri.base;
	cout << "Your " << tri.Color << " Triangle area is: " << tri.getArea();

	cout << '\n';
	cout << '\n';

	Circle cir;
	cout << "Circle color: ";
	cin >> cir.Color;
	cout << "Circle radius: ";
	cin >> cir.radius;
	cout << "Your " << cir.Color << " Circle area is: " << cir.getArea();


}
