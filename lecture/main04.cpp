#include<iostream>
#include"Circle04.h"
using namespace std;

int main() {
	/*
	NamedCircle waffle(3, "waffle");
	waffle.show();
	*/
	NamedCircle pizza[5];
	int radius[5];
	string names[5];
	int max;
	string pizName;
	cout << "5개 정수 반지름과 원의 이름을 입력하세요"<<endl;
	for (int i = 0; i < 5; i++) {
		int r;
		string name;
		
		cout << i+1 << " >>";
		cin >> r >> name;
		pizza[i].set(r, name);

		max = pizza[0].getArea();
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
			pizName = name;
		}
		

	}
	cout << "가장 면적이 큰 피자는" << pizName << "입니다." << endl;
}