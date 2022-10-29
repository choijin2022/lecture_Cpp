#pragma once
#include<iostream>
using namespace std;

/*
Circle classÀÇ ¸â¹öÇÔ¼ö
setRadius()
getArea()
*/

class Circle {
	int radius=1;

public:
	Circle() {
		radius = 1;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	~Circle() {
		cout << "¼Ò¸êÀÚ ½ÇÇà radius = " << radius << endl;
	}

public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
	
}

double Circle::getArea() {
	return radius* radius*3.14;
}
