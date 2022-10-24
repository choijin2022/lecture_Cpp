#pragma once
#include<ctime>
#include <iostream>
#include<string>
using namespace std;

class Date {
	string date;
	int ndate = 0;
	int year=0;
	int month = 0;
	int day = 0;
	
public:
	Date(int year, int month, int day);
	Date(string date);
public:
	
	void show();
	int getYear();
	int getMonth();
	int getDay();
};
Date::Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::Date(string date) {
	int index1 = date.find("/");
	string year = date.substr(0, index1);
	int index2 = date.find("/", index1 + 1);
	string month = date.substr(index1 + 1, index2 - index1 - 1);
	string day = date.substr(index2 + 1, date.length());
	this->year = stoi(year);
	this->month = stoi(month);
	this->day = stoi(day);
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}