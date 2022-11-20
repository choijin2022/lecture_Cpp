#pragma once
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
	
};

template <class T>
void myswap(T& a, T& b) {
	T tem;
	tem = a;
	a = b;
	b = tem;
}

template <class T>
T bigger(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}
// 배열의 크기를 매개변수로 받아 합을 구하여 리턴하는 제네릭 함수 add() 작성

template<class T>
T add(int size, T arr[]) {
	T sum=0;
	for (int i = 0; i < size; i++) {
		
		sum += arr[i];
	}
	return sum;
}

// 두 개의 배열을 매개 변수로 받아 배열을 복사하는 제네릭 mcopy()함수를 작성
template<class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) {
	for (int i = 0; i < n; i++) {
		dest[i] = (T2) src[i];
	}
}

template<class T>
void print(T arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}

void print(char arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout <<(int) arr[i] << '\t';
	}
	cout << endl;
}