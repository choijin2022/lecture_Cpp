#include<iostream>
#include"Circle.h"
using namespace std;

int main() {
	/*
	* //예제 4-4
	Circle circles[2][3];

	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "circles[" << i << "][" << j << "]의 면적 :";
			cout << circles[i][j].getArea() << endl;
		}
	}
	*/
	//예제 4-10
	int number = 0;
	cout << "원의 갯수를 입력하세요 >> ";
	cin >> number;
	Circle *circles= new Circle[number];
	for (int i = 0; i < number; i++) {
		int radius;
		cout << i + 1 << "번 원 반지름 : ";
		cin >> radius;
		circles[i].setRadius(radius);
	}
	int count = 0;
	for (int i = 0; i < number; i++) {
		if (circles[i].getArea() >= 100) {
			count++;
		}
	}
	
	cout << "면적이 100이상인 원의 개수 : " << count << endl;

	delete[]circles;

}