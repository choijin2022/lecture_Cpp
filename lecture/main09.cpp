#include<iostream>
#include<cstring>
using namespace std;

int stringTolnt(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if ( x[i] >='0' && x[i] <='9') {
			sum = sum * 10 + x[i] - '0';
		}
		else
			throw x;
	}
	return sum;
}

/*
int getExp(int base, int exp) {
	int value = 1;
	for (int n = 0; n < exp; n++) {
		value = value * base;
	}
	return value;
}
*/
/*
int getExp(int base, int exp) {
	if (base <= 0 || exp <= 0) {
		return -1;
	}
	int value = 1;
	for (int n = 0; n < exp; n++) {
		value = value * base;
	}
	return value;
}
*/
int main() {
	/*
	int v = 0;
	v = getExp(2, 3);
	if (v != -1) {
	cout << "2�� 3���� " << v << "�Դϴ�." << endl;

	}
	else
		cout<<"���� !! 2�� 3���� " << "����� �� �����ϴ�." << endl;
	int e = 0;
		e= getExp(2, -3);
	if(e != -1) {
		cout << "2�� -3���� " << e << "�Դϴ�." << endl;

	}
	else
		cout << "���� !! 2�� -3���� " << "����� �� �����ϴ�." << endl;
		
	int sum, n, average;
	while (true) {
		cout << "���� ���ϼ��� >> ";
		cin >> sum;
		cout << "�ο����� ���ϼ��� >>";
		cin >> n;
		try {
			if (n <= 0)
				throw n;
			else {
				average = sum / n;
				
			}
		}
			catch (int x) {
				cout << "���� �߻� ! " << x << "���� ���� �� ����." << endl;
				average = 0;
				cout << endl;
				continue;

			}
			cout << "��� : " << average << endl;
	}
	*/
	// ���ڿ��� ������ ��ȯ�ϱ�
	int n;
	try {
		n = stringTolnt("123");
		cout << "\"123\"�� ���� " << n << "���� ��ȯ��" << endl;
		n = stringTolnt("1A3");
		cout << "\"1A3\"�� ���� " << n << "���� ��ȯ��" << endl;
	}
	catch (const char* s) {
		cout << s << " ó������ ���� �߻�! " << endl;
		return 0;
	}
}
