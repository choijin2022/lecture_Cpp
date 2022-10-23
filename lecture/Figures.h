#pragma once

#include<string>

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
};
	
class Rectangle
{
public:
	double width;
	double height;
	Rectangle();
	Rectangle(double width, double height);

public:
	double getRectangle();
};
Rectangle::Rectangle() {
	width = 1;
	height = 1;
	
}
Rectangle::Rectangle(double width, double height) {
	this->width = width;
	this->height = height;
}
double Rectangle::getRectangle() {
	return width * height;
}
