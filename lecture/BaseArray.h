#pragma once
#include<iostream>

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() {
		delete[] mem;
	}
	void put(int index, int val) {
		mem[index] = val;
	}
	int get(int index) {
		return mem[index];
	}
	int getCapacity() {
		return capacity;
	}
};


class MyQueue : public BaseArray {
	int head, tail;
	int size;
	
public:
	MyQueue(int capacity);
	void enqueue(int n);
	int depueue();
	int capacity();
	int length();

};

MyQueue::MyQueue(int capacity) :BaseArray(capacity) {
	head = 0;
	tail = -1;
	size = 0;
}
void MyQueue::enqueue(int n) {
	if (size == capacity())
		return;
	put(head, n);
	head++;
	head = head % capacity();
	size++;
}
int MyQueue::depueue() {
	if (size == 0)
		return -1;
	size--;
	tail++;
	tail = tail % capacity();
	return get(tail);
}

int MyQueue::capacity() {
	return getCapacity();
}
int MyQueue::length() {
	return size;
}