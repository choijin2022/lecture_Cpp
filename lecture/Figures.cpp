#include<iostream>
#include"Figures.h"
using namespace std;

//Circle
double Circle::getArea() {
	return 3.14 * radius * radius;
}
Circle::Circle(int radius)
{
	this->radius = radius;

};

//Rectangle
Rectangle::Rectangle() : Rectangle(1, 1) {}
Rectangle::Rectangle(double width, double height) {
	this->width = width;
	this->height = height;
}
Rectangle::~Rectangle()
{
	cout << "너비 : " << width << ", 높이 : " << height << "\t소멸" << endl;
}
double Rectangle::getRectangle() {
	return width * height;
}
bool Rectangle::isSquare() {
	if (width == height) {
		return true;
	}
	return false;
}

//Tower
Tower::Tower():Tower(1){}
Tower::Tower(int height) {
	this->height = height;
}
int Tower::getHeight() {
	return height;
}