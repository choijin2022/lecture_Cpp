#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
#include"Figures.h"


using namespace std;

int main() {
	// �ǽ����� 01. 1~100���, �� �ٿ� 10����
	/*
	for (int i = 1; i <= 100; i++) {	
		cout << i << "\t";
		if (i % 10 == 0) {
			cout << endl;
		}
	}
	*/
	// �ǽ����� 02. ������ ���
	/*
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << 'x' << j << '=' << i + j << " ";
		}
		cout << endl;
	}
	*/
	// �ǽ����� 03.�� ������ input, �� �� ū ���� ���
	/*
	cout << "�� ������ �Է��ϼ��� >>";
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2) {
		cout << "max : "<<num1 << endl;
	}else{
		cout << "max : " << num2 << endl;
	}
	*/
	// �ǽ� 05. <����>Ű�� �Էµ� ������ ���ڵ��� �а�, �Էµ� ������ ������ ���
	// version 01
	/*
	char word[100];
	char find;
	cout << "�����ڸ� �Է��ϼ���(100�� �̸�)" << endl << ">>";
	
	cin >> word;

	cout << "���� ������ �˰� ���� ���ڸ� �Է��ϼ���" << endl;
	cin >> find;
	int length=0;
	int count = 0;
	for (int i = 0; i < 100; i++) {
		if (word[i] == '\0') {
			length = i;
			break;
		}
		if (word[i] == find) {
			++count;
		}
	}
	cout << find << "�� ���� : " << count << endl;
	//for (int j = 0; j < length; j++) {
	//	cout << "" << word[j]<<endl;
	//}
	*/
	// version 02 - cin.genline()�̿�
	/*
	char word[100];
	cout << "�����ڸ� �Է��ϼ���(100�� �̸�)" << endl;
	cin.getline(word, 100, '\n');
	cout << "�Էµ� ���� : " << word << endl;
	// ��� ������ ����
	*/
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
	//5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���.
	
	/*
	char names[100];
	char longest[100];
	cout << "�̸� �Է� :";
	int length = 0;
	

	for (int i = 0; i <5; i++) {
		cin.getline(names, 100, ';');
		cout << i + 1 << " : " << names << endl;
		
		if (length < strlen(names)) {
			length = strlen(names);
			strcpy(longest, names);
		}
	}
	cout << "���� �� �̸��� " << longest << "�Դϴ�" << endl;
	*/
Circle dounut;
dounut.radius = 3;
double area = dounut.getArea();
cout << "dounut�� ������ " << area << endl;

Circle pizza;
pizza.radius = 20;
area = pizza.getArea();
cout << "pizza�� ������ " << area << endl;

Rectangle cellphone(12,10);
double area1=cellphone.getRectangle();
cout << "cellphone�� ������ " << area1 << endl;

}