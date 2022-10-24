#pragma once
#include<string>
using namespace std;

class Circle {
	int radius;

public:
	Circle() {
		radius = 1;
	};
	Circle(int radius);
	double getArea();
};



class Rectangle
{
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double width, double height);
	~Rectangle();

public:
	double getRectangle();
	bool isSquare();
};


class Tower {
	int height;
public :
	Tower();
	Tower(int height);
public :
	int getHeight();

};
