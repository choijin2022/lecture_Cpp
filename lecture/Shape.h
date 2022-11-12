#pragma once
#include<iostream>
using namespace std;

class Shape {

public:
	virtual void draw() = 0;
};


class Rect : public Shape {
	virtual void draw() {
		cout << "Rectiangle" << endl;
	}
};

class Line : public Shape {
	virtual void draw() {
		cout << "Line" << endl;
	}
};

class Tri : public Shape {
	virtual void draw() {
		cout << "Triangle" << endl;
	}
};
