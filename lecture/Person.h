#pragma once
#include<iostream>
#include<cstring>
using namespace std;


class Person {
	int id;
	char* name;
public:
	Person();
	Person(int id, const char* name); 
	Person(const Person& person);
	~Person() {
		if (name)
			delete []name;
	}
	void changeName(const char* name);
	void showName();
};


