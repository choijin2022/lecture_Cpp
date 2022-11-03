#pragma once
#include<iostream>
using namespace std;

char& find(char s[], int index) {
	return s[index];
}

Circle getCircle() {
	Circle tem(30);
	return tem;
}
void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
bool average(int a[], int size, int& avg) {
	if (size <= 0)
		return false;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	avg = sum / size;
	return true;
}