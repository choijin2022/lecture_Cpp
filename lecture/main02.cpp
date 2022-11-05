#include<iostream>
#include<string>
#include"Circle.h"
#include"Util2.h"
#include"Person.h"
using namespace std;
// 주석 : ctrl + k + c
// 주석해제 : ctrl + k + u

void f(Person person) {
	person.changeName("dummy");
};

Person g() {
	Person mother(2, "jane");
	return mother;
};
void half(double& n) {
	n = n / 2;
}

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
/*
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
*/
// &가 입력될 때까지 여러 줄의 영문 문자열을 입력받고, 찾는 문자열과 대치할 문자열을 각각 입력받아 문자열을 변경
/*
string s;
cout << "여러 줄의 문자열 입력, 입력 끝은 &문자입니다." << endl;
getline(cin, s, '&');
cin.ignore();
string f, r;
cout << "find : ";
getline(cin, f);
cout << "replace : ";
getline(cin, r);

int startIndex = 0;
while (true) {
	int fIndex = s.find(f, startIndex);
	if (fIndex == -1)
		break;
	s.replace(fIndex, f.length(), r);
	startIndex = fIndex + r.length();

	}
	cout << s << endl;
	*/
/*
	string words = "I like cat and dog";
	string fstr = "cat";
	string rstr = "cat named choonsik";
	cout << "변경전 : " << words << endl;
	words.replace(words.find(fstr), fstr.length(), rstr);
	cout<< "변경후 : " << words << endl;
	*/

/*
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
	*/
/*
	Circle c;
	c = getCircle();
	cout << c.getArea() << endl;
	*/
//참조변수
/*
cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
int i = 1;
int n = 2;
int& refn = n;
n = 4;
refn++;
cout << i << '\t' << n << '\t' << refn << endl;
refn = 50;
cout << i << '\t' << n << '\t' << refn << endl;
	if (&n == &refn) {
		cout << "같음" << endl;
	}
	int* p = &refn;
	if (&n == p) {
		cout << "p도 같음" << endl;
	}
	*/
/*
	Circle circle;
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea()<<"\t"<<circle.getArea()<<endl;
	*/
	/*
	int a = 10;
	int b = 20;
	cout << a << "\t" << b << endl;
	swap(a, b);
	cout << a << "\t" << b << endl;
	*/
	/*
	int scores[] = { 80,90,95,100,98 };
	int avg = 0;
	if (average(scores, size(scores), avg))
		cout << avg<<endl;
	else
		cout << "오류" << endl;
	*/
/*
	Circle donut;
	donut.readRadius(donut);
	cout << donut.getArea()<<endl;
	*/
	/*
	char name[] = "mike";
	cout << name << endl;

	find(name, 0) = 's';
	cout << name << endl;

	char& ref = find(name, 2);
	//char& s[index] 형식으로 리턴.
	cout << ref << endl;
	ref = 't';
	cout << name << endl;
	*/

	/*Circle src(30);
	Circle desc(src);
	cout << "원본 면적" << "\t"<<src.getArea() << endl;
	cout << "사본 면적" << "\t" << desc.getArea() << endl;*/
	/*
	Person father(1, "White");
	Person daughter(2, "Purpl");
	cout << "daughter 객체 생성 직후 ----------" << endl;
	father.showName();
	daughter.showName();
	daughter.changeName("Grace");
	cout<< "daughter 이름을 Grace로 변경한 후 ----------" << endl;
	father.showName();
	daughter.showName();
	*/
	/*
	Person father(1, "White");
	Person daughter(father);
	cout << "daughter 객체 생성 직후 ----------" << endl;
	father.showName();
	daughter.showName();
	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----------" << endl;
	father.showName();
	daughter.showName();
	*/
/*
	Person father(1, "white");
	Person son = father;
	f(father);
	g();
	*/

	double n = 20;
	half(n);
	cout << n;
	return 0;
	}

