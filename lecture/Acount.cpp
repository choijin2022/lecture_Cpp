#include<iostream>
#include<string>
#include"Acount.h"



Acount::Acount(string name, int id, int totalMoney) {
	this->name = name;
	this->id = id;
	this->totalMoney = totalMoney;
}

void Acount::deposit(int money) {
	
	totalMoney = money + totalMoney;
};

string Acount::getOwner() {
	return name;
};
int Acount::inquiry() {
	return totalMoney;
};

int Acount::withD(int money) {
	if (money > totalMoney) {
		totalMoney = 0;
		money -= totalMoney;
	}
	else {
		totalMoney -= money;
	}
	return money;
};