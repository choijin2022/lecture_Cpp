#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
#include"Figures.h"
#include"Util.h"
#include"Acount.h"


using namespace std;

int main() {
	
	// 실습 05. <엔터>키가 입력될 때까지 문자들을 읽고, 입력된 문자의 개수를 출력
	
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
	// 실습 06. 한 라인에';'으로 5개 이름을 구분하여 입력받아, 각 이름을 끊어내어 화면 출력, 가장 긴 이름 판별.
	/*
	char names[100];
	char longest[100];
	int  length  = 0;
	cout << "이름을 5개 입력하되, ';'으로 끊어서 구분하세요 " << endl << "입력 << ";
	for (int i = 0; i < 5; i++) {
		cin.getline(names, 100, ';');
		cout << i + 1 << " : " << names<<endl;
		if (length < strlen(names)) {
			length = strlen(names);
			strcpy(longest, names);
		}
		
	}
	cout << "가장 긴 이름은 " << longest;
	*/
/*
Circle dounut(3);

double area = dounut.getArea();
cout << "dounut의 면적은 " << area << endl;

Circle pizza(20);

area = pizza.getArea();
cout << "pizza의 면적은 " << area << endl;

Rectangle cellphone(12,10);
double area1=cellphone.getRectangle();
cout << "cellphone의 면적은 " << area1 << endl;

if (cellphone.isSquare()) {
	cout << "cellphone은 정사각형 입니다." << endl;
}
else {
	cout << "cellphone은 정사각형이 아닙니다." << endl;
}

Rectangle eraser;
area1 = eraser.getRectangle();

cout << "eraser의 면적은 " << area1 << endl;


if (eraser.isSquare()) {
	cout << "eraser는 정사각형 입니다." << endl;
}else{
	cout<<"eraser는 정사각형이 아닙니다." << endl;
}
*/
	/*
	Tower myTower;
	Tower seoulTovwer(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTovwer.getHeight() << "미터" << endl;
	*/
/*
Date birth(1994, 01, 18);
birth.show();
Date Ghangbok("1945/8/15");
Ghangbok.show();
*/

Acount a("choonsik", 1, 5000);
a.deposit(50000);
cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
int money = a.withD(30000);
cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}