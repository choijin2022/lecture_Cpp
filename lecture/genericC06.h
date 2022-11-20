#pragma once
#include<iostream>
using namespace std;

template <class T1, class T2>
class GClass {
	T1 data1;
	T2 data2;
public:
	GClass();
	void set(T1 a, T2 b);
	void get(T1& a, T2& b);
};

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << "( " << x << ", " << y << ")" << endl;
	}
};



template <class T>
class MyStack {
	int top_s;
	T data[100];
public:
	MyStack();
	void Push(T element);
	T pop();
};

template <class T>
MyStack<T>::MyStack() {
	top_s = -1;
}

template <class T>
void MyStack<T>::Push(T element) {
	if (top_s == 99) {
		cout << "stack full" << endl;
		return;
	}
	top_s++;
	data[top_s] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (top_s == -1) {
		cout << "stack empty" << endl;
		return 0;
	}
	cout << "--이전 top_s : "<<top_s << endl;
	retData = data[top_s--];
	cout << "-- 이후 top_s : "<<top_s << endl;
	return retData;
	
}

template<class T1, class T2>
GClass<T1,T2>::GClass() {
	data1 = 0;
	data2 = 0;
}

template<class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
	data1 = a;
	data2 = b;
}

template<class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
	a = data1;
	b = data2;
}