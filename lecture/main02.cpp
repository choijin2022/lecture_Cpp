#include<iostream>
#include<string>
#include"Circle.h"
using namespace std;
// 주석 : ctrl + k + c
// 주석해제 : ctrl + k + u
int main() {
	/*
	* //예제 4-4
	Circle circles[2][3];

	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "circles[" << i << "][" << j << "]의 면적 :";
			cout << circles[i][j].getArea() << endl;
		}
	}
	*/
	//예제 4-10
	
	/*
	int number = 0;
	cout << "원의 갯수를 입력하세요 >> ";
	cin >> number;
	Circle *circles= new Circle[number];
	for (int i = 0; i < number; i++) {
		int radius;
		cout << i + 1 << "번 원 반지름 : ";
		cin >> radius;
		circles[i].setRadius(radius);
	}
	int count = 0;
	for (int i = 0; i < number; i++) {
		if (circles[i].getArea() >= 100) {
			count++;
		}
	}
	
	cout << "면적이 100이상인 원의 개수 : " << count << endl;

	delete[]circles;
	*/
	/*
	string words[5];
	for (int i = 0; i < 5; i++) {
		cout << "단어 입력 << ";
		getline(cin, words[i]);
	}
	string letter = words[0];

	for (int j = 1; j < 5; j++) {
		if (letter < words[j]) {
			letter = words[j];
			cout << words[j] << endl;
		}
		
		}
	cout << "가장 뒤에 나오는 문자열은 " << letter << "입니다." << endl;
	*/
	/*
	string s;
	cout << "문장을 입력하세요 > ";
	getline(cin, s);
	int len = s.length();

	
	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);
		string sub = s.substr(1, len - 1);
		s = sub + first;
		cout << s << endl;
		
	}
	*/
	//덧셈 문자열을 입력받아 덧셈 실행
	string s;
	cout << "덧셈할 문자열을 입력하세요, ex: 1+2+3" << endl << "입력 >> ";
	getline(cin, s);
	int sum=0;
	int starIndex = 0;
	while (true)
	{
		int fIndex = s.find('+', starIndex);
		if (fIndex == -1) {
			string part = s.substr(starIndex);
			if (part == "")
				break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex - starIndex;
		string part = s.substr(starIndex, count);
		cout << part << endl;
		sum += stoi(part);
		starIndex = fIndex + 1;
		
	}
	cout << "숫자들의 합은 " << sum << endl;
}