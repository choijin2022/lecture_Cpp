#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
#include"Figures.h"
#include"Util.h"
#include"Acount.h"


using namespace std;

int main() {
	
	// �ǽ� 05. <����>Ű�� �Էµ� ������ ���ڵ��� �а�, �Էµ� ������ ������ ���
	
	// verwion 03 = string �̿�
	/* ========== ������ �ִµ� ���� ������ ==========
	string word;
	string find;
	cout << "���ڸ� �Է��ϼ���"<<endl;
	getline(cin, word);
	cout << "ã�� ���ڸ� �Է��ϼ���" << endl;
	cin >> find;
	int find_len = find.length();
	int count = 0;
	int c_len = 0;
	
	// int i = 0; i < word.length() - find_len + 1; i++
	// int j = 0; j < find_len; j++
	for (int j = 0; j < find_len; j++) {
		for (int i = 0; i < word.length() - find_len + 1; i++) {
			if (c_len > 7) {
				break;
			}
			if (word[i] == find[j]) {
				
				
				cout << " word[i] : " << word[i] << "  find[j] : " << find[j] << endl;
				for (int n = 1; n < find_len; n++) {
					if (word[i + n] != find[j + n]) {
						break;
					}
					++c_len;
					cout << "n : " << n << ", i : "<< i << ", j : " << j << endl;
					cout << " word[i + n] : " << word[i + n] << "  find[j + n] : " << find[j + n] << endl;
					if (n == find_len - 1) {
						cout << "c_len : "<<c_len << endl;
						++count;
						i = i + find_len;
					}

				}
			}
		}

	}
	cout << count << endl;

	*/
	// �ǽ� 06. �� ���ο�';'���� 5�� �̸��� �����Ͽ� �Է¹޾�, �� �̸��� ����� ȭ�� ���, ���� �� �̸� �Ǻ�.
	/*
	char names[100];
	char longest[100];
	int  length  = 0;
	cout << "�̸��� 5�� �Է��ϵ�, ';'���� ��� �����ϼ��� " << endl << "�Է� << ";
	for (int i = 0; i < 5; i++) {
		cin.getline(names, 100, ';');
		cout << i + 1 << " : " << names<<endl;
		if (length < strlen(names)) {
			length = strlen(names);
			strcpy(longest, names);
		}
		
	}
	cout << "���� �� �̸��� " << longest;
	*/
/*
Circle dounut(3);

double area = dounut.getArea();
cout << "dounut�� ������ " << area << endl;

Circle pizza(20);

area = pizza.getArea();
cout << "pizza�� ������ " << area << endl;

Rectangle cellphone(12,10);
double area1=cellphone.getRectangle();
cout << "cellphone�� ������ " << area1 << endl;

if (cellphone.isSquare()) {
	cout << "cellphone�� ���簢�� �Դϴ�." << endl;
}
else {
	cout << "cellphone�� ���簢���� �ƴմϴ�." << endl;
}

Rectangle eraser;
area1 = eraser.getRectangle();

cout << "eraser�� ������ " << area1 << endl;


if (eraser.isSquare()) {
	cout << "eraser�� ���簢�� �Դϴ�." << endl;
}else{
	cout<<"eraser�� ���簢���� �ƴմϴ�." << endl;
}
*/
	/*
	Tower myTower;
	Tower seoulTovwer(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTovwer.getHeight() << "����" << endl;
	*/
/*
Date birth(1994, 01, 18);
birth.show();
Date Ghangbok("1945/8/15");
Ghangbok.show();
*/

Acount a("choonsik", 1, 5000);
a.deposit(50000);
cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
int money = a.withD(30000);
cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}