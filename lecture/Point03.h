#pragma once
#include<string>
#include<iostream>
using namespace std;
/*
ColorPoint cp(5, 5, "red");
cp.setPoint(10, 20);
cp.Color("blue");
cp.show();
*/
class Point {
	int x;
	int y;
public:
	Point(){
	this->x = 0;
	this->y = 0;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX();
	int getY();
protected:
	void move(int x, int y);
};

void Point::move(int x, int y) {
	this->x = x;
	this->y = y;
};
int Point::getX() {
	return x;
}
int Point::getY() {
	return y;
};
//
class ColorPoint:Point
{
	string color;
public:
	ColorPoint(int x, int y, string color) {
		setPoint(x, y);
		this->color = color;
	}
	//~ColorPoint();

	
	void setPoint(int x, int y);
	void Color(string);
	void show();
};


void ColorPoint::Color(string) {
	this->color = color;
}
void ColorPoint::show() {
	cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다. " << endl;
}
void ColorPoint::setPoint(int x, int y) {
	move(x, y);
}