#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Circle {
	int radius = 0;
	
protected:
	Circle() {
		setR(0);
	}
	Circle(int radius) {
		setR(radius);
	}
public:
	void setR(int radius) {
		this->radius = radius;

	}
	
	int getRadius() {
		return radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	

};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() : Circle() {

	}
	NamedCircle(int radius, string name) : Circle(radius) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void show() {
		cout << "반지름이 " << getRadius() << "인 " << getName() << endl;
	};
	void set(int radius, string name) {
		setR(radius);
		this->name = name;
	}
};