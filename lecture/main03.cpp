#include <iostream>
#include<string>
#include"Shape.h"
#include"Circle03.h"
#include"Point03.h"
#include"Calculator.h"

int main() {
	/*
	namedCircle waffle(3, "waffle");
	waffle.show();
	*/
	/*
	//ver 1
	namedCircle pizza[5];
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ��� " << endl;
	string maxName;
	int max=-1;
	for (int i = 0; i < 5; i++) {
		string name;
		int radius;
		cout << i+1 << "�� ������ �Է� : ";
		cin >> radius;
		cout << i + 1 << "�� �̸� �Է� : ";
		cin >> name;
		pizza[i].set(radius, name);
		
		
		//cout << pizza[i].getRadius() << endl;
		if (max < radius) {
			max = radius;
			maxName = name;
			
		}
	}
	cout << "���� ������ ū ���ڴ� " << maxName << "�Դϴ�." << endl;
	*/
	//ver 2
	/*
	namedCircle pizza[5];
	int r, big = 0;
	string name;
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ��� " << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "�Է� : ";
		cin >> r >> name;
		if (r <= 0) {
			cout << "�ٽ� �Է��ϼ���" << endl;
			i--;
			continue;
		}
		pizza[i].set(r, name);
		if (pizza[i].getArea() > pizza[big].getArea()) {
			big = i;
		}

	}
	cout << "���� ������ ū ���ڴ� " << pizza[big].getName() << "�Դϴ�." << endl;
	*/
	/*
	ColorPoint cp(5, 5, "red");
	cp.setPoint(10, 20);
	cp.Color("blue");
	cp.show();
	*/
	/*
	Shape* tri = new Tri();

	tri->draw();
	*/
	Calculator handCarculator;
	cout << "2 + 4 = " << handCarculator.carculate('+', 2, 4) << endl;

	cout << "100 - 8 = " << handCarculator.carculate('-', 100, 8) << endl;

	cout << "50 * 4 = " << handCarculator.carculate('*', 50, 4) << endl;
}