#pragma once
#include<iostream>
using namespace std;

/*
Circle class의 멤버함수
setRadius()
getArea()
*/

class Circle {
	int radius=1;

public:
	Circle(const Circle& c) {
		this->radius = c.radius;
		cout << "복사 생성자 실행 radius = " << radius << endl;
	}
	Circle() {
		radius = 1;
		cout << "생성자 실행 radius = " << radius << endl;
	}
	Circle(int radius) {
		this->radius = radius;
		cout << "생성자 실행 radius = " << radius << endl;
	}
	~Circle() {
		cout << "소멸자 실행 radius = " << radius << endl;
	}

public:
	void setRadius(int radius);
	double getArea();
	int getRadius();
	void readRadius(Circle &circle);
	
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
void Circle::readRadius(Circle& circle) {
	int r = 0;
	cout << "반지름 입력 >> ";
	cin >> r;
	circle.setRadius(r);
	
}
