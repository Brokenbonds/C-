#pragma once
#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape {
public:

	string Color;

	void getArea() {

	}
};

class Rectangle : public Shape 
{
public:

	float height;
	float width;

	float  getArea() {
		float area = height * width;
		return area;
	}
};

class Triangle : public Shape
{
public:

	float base;
	float height;

	float getArea() {
		float area = 0.5 * base * height;
		return area;
	}
};

class Circle : public Shape
{
	float pi = 3.1415;

public:

	float radius;


	float getArea()
	{
		float area = pi * (pow(radius, 2));
		return area;
	}
};
