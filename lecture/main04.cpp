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
	cout << "5�� ���� �������� ���� �̸��� �Է��ϼ���"<<endl;
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
	cout << "���� ������ ū ���ڴ�" << pizName << "�Դϴ�." << endl;
	*/
	/*
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
	
	//�ǽ� 4
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
	cout << "ť�� ������ 5���� ������ �Է��϶� >> ";
	
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮" << mQ.capacity() << "ť�� ũ��" << mQ.length() << endl;
	*/

	MyStack mStack(100);
	int m;
	cout << "���ÿ� ������ 5���� ������ �Է��϶� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> m;
		mStack.push(m);

	}
	cout << "���� �뷮 : " << mStack.capacity() << ", ���� ũ��: " << mStack.length() << endl;

}