#include<iostream>
#include"genericF06.h"
#include"genericC06.h"
using namespace std;

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a = " << a << ", " << "b = " << b << endl;

	double n = 2.5, m = 5.5;
	myswap(n, m);
	cout << "n = " << n << ", " << "m = " << m << endl;

	Circle dounut(5), pizza(10);
	myswap(dounut, pizza);
	cout << "dounut 반지름 " << dounut.getRadius() << endl;
	cout << "pizza 반지름 " << pizza.getRadius() << endl;

	int num1=55, num2=100;
	cout<< "큰 수 출력 : "<< bigger(num1, num2)<<endl;
	char ch1 = 'a', ch2 = 'z';
	cout << "큰 수 출력 : " << bigger(ch1, ch2) << endl;

	// 배열의 크기를 매개변수로 받아 합을 구하여 리턴하는 제네릭 함수 add() 작성
	int arr[] = { 1,2,3,4,5 };
	double arr2[] = { 1.1, 2.5, 3.5, 4.4, 9.7, 8.1 };
	cout<<add(size(arr), arr)<<endl;
	cout << add(size(arr2), arr2) << endl;

	int x[] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'H','e','l','l','o' },e[5];
	mcopy(x, d, size(x));
	for (int i = 0; i < size(x); i++) {
		cout << d[i];
	}
	cout << endl;
	mcopy(c, e, size(x));
	for (int i = 0; i < size(x); i++) {
		cout << e[i];
	}
	cout << endl;

	print(x, size(x));
	print(c, size(c));

	MyStack<int> iStack;
	iStack.Push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack;
	dStack.Push(33.7);
	cout << dStack.pop() << endl;

	MyStack<char> *p = new MyStack<char>();
	p->Push('H');
	cout << p->pop() << endl;
	delete [] p;
	MyStack<int*> ipStack;
	int* ip = new int[3];
	for (int i = 0; i < 3; i++) {
		ip[i] = i * 10;
	}
	ipStack.Push(ip);
	int* q = ipStack.pop();
	for (int i = 0; i < 3; i++) {
		cout << q[i] << " ";
	}
	cout << endl;
	delete[] ip;

	MyStack<Point> pointStack;
	Point cP(2, 3), cP2;
	pointStack.Push(cP);
	cP2 = pointStack.pop();
	cP2.show();

	int gA;
	double gB;
	GClass<int, double> gC;
	gC.set(105, 22.4);
	gC.get(gA, gB);
	cout << "gA : " << gA << ", gB : " << gB <<  endl;

	char chA;
	float fB;
	GClass<char, float> gD;
	gD.set('T', 0.88);
	gD.get(chA, fB);
	cout << "chA : " << chA << ", fB : " << fB << endl;
}
