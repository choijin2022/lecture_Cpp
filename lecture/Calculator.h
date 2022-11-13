#pragma once
#include<iostream>
using namespace std;

/*
	Calculator handCarculator;
	cout << "2 + 4 = " << handCarculator('+', 2, 4) << endl;

	Calculator handCarculator;
	cout << "100 - 8 = " << handCarculator('-', 100, 8) << endl;
*/
class Adder{
public:
	int add(int num1, int num2) {
		return num1 + num1;
	}

};
class Substractor {
public:
	int substract(int num1, int num2) {
		return num1 - num2;
	}
};

class Calculator : public Adder, public Substractor {
	int num1;
	int num2;
	int result;
	char operSign;
protected:
	void set(char operSign, int num1=0, int num2=0) {
		this->operSign = operSign;
		this->num1 = num1;
		this->num2 = num2;
	}
public:
	int carculate(char operSign, int num1, int num2);
	int giveResult() {
		return result;
	}

	
};

int Calculator::carculate(char operSign, int num1, int num2) {
	result = 0;
	set(operSign, num1, num2);
	
	switch (operSign)
	{
	case '+':
		result = add(num1, num2);
		break;
	case '-':
		result = substract(num1, num2);
		break;
	default:
		cout << "다시 입력하세요 " << endl;
		break;
	}
	return giveResult();
	
}
