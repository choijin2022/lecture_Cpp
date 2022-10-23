#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
#include"Figures.h"


using namespace std;

int main() {
	// 실습문제 01. 1~100출력, 한 줄에 10개씩
	/*
	for (int i = 1; i <= 100; i++) {	
		cout << i << "\t";
		if (i % 10 == 0) {
			cout << endl;
		}
	}
	*/
	// 실습문제 02. 구구단 출력
	/*
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << 'x' << j << '=' << i + j << " ";
		}
		cout << endl;
	}
	*/
	// 실습문제 03.두 정수를 input, 둘 중 큰 수를 출력
	/*
	cout << "두 정수를 입력하세요 >>";
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2) {
		cout << "max : "<<num1 << endl;
	}else{
		cout << "max : " << num2 << endl;
	}
	*/
	// 실습 05. <엔터>키가 입력될 때까지 문자들을 읽고, 입력된 문자의 개수를 출력
	// version 01
	/*
	char word[100];
	char find;
	cout << "영문자를 입력하세요(100자 미만)" << endl << ">>";
	
	cin >> word;

	cout << "사용된 갯수를 알고 싶은 문자를 입력하세요" << endl;
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
	cout << find << "의 갯수 : " << count << endl;
	//for (int j = 0; j < length; j++) {
	//	cout << "" << word[j]<<endl;
	//}
	*/
	// version 02 - cin.genline()이용
	/*
	char word[100];
	cout << "영문자를 입력하세요(100개 미만)" << endl;
	cin.getline(word, 100, '\n');
	cout << "입력된 문자 : " << word << endl;
	// 출력 로직은 유사
	*/
	// verwion 03 = string 이용
	/* ========== 오류가 있는데 아직 생각중 ==========
	string word;
	string find;
	cout << "문자를 입력하세요"<<endl;
	getline(cin, word);
	cout << "찾을 문자를 입력하세요" << endl;
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
	//5명의 이름을 ';'으로 구분하여 입력하세요.
	
	/*
	char names[100];
	char longest[100];
	cout << "이름 입력 :";
	int length = 0;
	

	for (int i = 0; i <5; i++) {
		cin.getline(names, 100, ';');
		cout << i + 1 << " : " << names << endl;
		
		if (length < strlen(names)) {
			length = strlen(names);
			strcpy(longest, names);
		}
	}
	cout << "가장 긴 이름은 " << longest << "입니다" << endl;
	*/
Circle dounut;
dounut.radius = 3;
double area = dounut.getArea();
cout << "dounut의 면적은 " << area << endl;

Circle pizza;
pizza.radius = 20;
area = pizza.getArea();
cout << "pizza의 면적은 " << area << endl;

Rectangle cellphone(12,10);
double area1=cellphone.getRectangle();
cout << "cellphone의 면적은 " << area1 << endl;

}