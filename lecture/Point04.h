#pragma once
#include<iostream>
#include<string>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int x=0, int y=0) {
		setPoint(x, y);
	}
	void setPoint(int x, int y) {
		this->x=x;
		this->y = y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int x =0, int y=0, string color ="BLACK") {
		setColorPoint(x, y, color);
	}
	void setColorPoint(int x, int y, string color) {
		setPoint(x, y);
		this->color=color;
	}
	void setColor(string) {
		this->color = color;
	}
	void show() {
		cout << getColor() << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
	}
	string getColor() {
		return color;
	}
};
