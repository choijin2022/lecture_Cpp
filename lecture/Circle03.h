#pragma once
#include<iostream>
#include<string>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius=0);
	~Circle();
	int getRadius();
	void setRadius(int radius);
	double getArea();

};

Circle::Circle(int radius)
{
	this->radius = radius;
};

Circle::~Circle()
{
};

int Circle::getRadius() {
	return radius;
};

void Circle::setRadius(int radius) {
	this->radius = radius;
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

class namedCircle : Circle {
	int radius;
	string name;
public:
	namedCircle(int radius=0, string name="") {
		this->radius = radius;
		this->name = name;
	}
	void show();
	string getName();
};

void namedCircle::show() {

	cout << "반지름이 " << radius << "이고 이름이" << name << "인 원" << endl;
};
string namedCircle::getName() {
	return name;
};