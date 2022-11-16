#include<iostream>
#include"Circle04.h"
#include"Point04.h"
#include"BaseArray.h"
using namespace std;

int main() {
	/*
	NamedCircle waffle(3, "waffle");
	waffle.show();
	*/
	/*
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
	*/
	/*
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
	
	//실습 4
	ColorPoint zeroPoint;
	zeroPoint.show();
	ColorPoint cp2(5, 5);
	cp2.setPoint(10, 20);
	cp2.setColor("BLUE");
	cp2.show();
	*/
	/*
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라 >> ";
	
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량" << mQ.capacity() << "큐의 크기" << mQ.length() << endl;
	*/

	MyStack mStack(100);
	int m;
	cout << "스택에 삽입할 5개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> m;
		mStack.push(m);

	}
	cout << "스택 용량 : " << mStack.capacity() << ", 스택 크기: " << mStack.length() << endl;

}