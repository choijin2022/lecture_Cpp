#pragma once
#include<iostream>
using namespace std;

/*
Circle class�� ����Լ�
setRadius()
getArea()
*/

class Circle {
	int radius=1;

public:
	Circle() {
		radius = 1;
		cout << "������ ���� radius = " << radius << endl;
	}
	Circle(int radius) {
		this->radius = radius;
		cout << "������ ���� radius = " << radius << endl;
	}
	~Circle() {
		cout << "�Ҹ��� ���� radius = " << radius << endl;
	}

public:
	void setRadius(int radius);
	double getArea();
	int getRadius();
<<<<<<< HEAD
	
=======
>>>>>>> 2395f179bc601c0c14ac9c7482dadf2eb33dc044
};

void Circle::setRadius(int radius) {
	this->radius = radius;
	
}

double Circle::getArea() {
	return radius* radius*3.14;
}
int Circle::getRadius() {
	return radius;
}
<<<<<<< HEAD

=======
>>>>>>> 2395f179bc601c0c14ac9c7482dadf2eb33dc044
