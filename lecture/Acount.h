#pragma once
#include<string>
using namespace std;

class Acount {
	string name;
	int id=0;
	int totalMoney = 0;



public:
	Acount(string name, int id, int totalMoney);

public:
	void deposit(int de_money);
	string getOwner();
	int inquiry();
	int withD(int money);

};