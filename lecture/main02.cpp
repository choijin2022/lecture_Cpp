#include<iostream>
#include<string>
#include"Circle.h"
#include"Util2.h"
#include"Person.h"
using namespace std;
// �ּ� : ctrl + k + c
// �ּ����� : ctrl + k + u

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
	* //���� 4-4
	Circle circles[2][3];

	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "circles[" << i << "][" << j << "]�� ���� :";
			cout << circles[i][j].getArea() << endl;
		}
	}
	*/
	//���� 4-10

/*
int number = 0;
cout << "���� ������ �Է��ϼ��� >> ";
cin >> number;
Circle *circles= new Circle[number];
for (int i = 0; i < number; i++) {
	int radius;
	cout << i + 1 << "�� �� ������ : ";
	cin >> radius;
	circles[i].setRadius(radius);
}
int count = 0;
for (int i = 0; i < number; i++) {
	if (circles[i].getArea() >= 100) {
		count++;
	}
}

cout << "������ 100�̻��� ���� ���� : " << count << endl;

delete[]circles;
*/
/*
string words[5];
for (int i = 0; i < 5; i++) {
	cout << "�ܾ� �Է� << ";
	getline(cin, words[i]);
}
string letter = words[0];

for (int j = 1; j < 5; j++) {
	if (letter < words[j]) {
		letter = words[j];
		cout << words[j] << endl;
	}

	}
cout << "���� �ڿ� ������ ���ڿ��� " << letter << "�Դϴ�." << endl;
*/
/*
string s;
cout << "������ �Է��ϼ��� > ";
getline(cin, s);
int len = s.length();


for (int i = 0; i < len; i++) {
	string first = s.substr(0, 1);
	string sub = s.substr(1, len - 1);
	s = sub + first;
	cout << s << endl;

}
*/
//���� ���ڿ��� �Է¹޾� ���� ����
/*
string s;
cout << "������ ���ڿ��� �Է��ϼ���, ex: 1+2+3" << endl << "�Է� >> ";
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
cout << "���ڵ��� ���� " << sum << endl;
*/
// &�� �Էµ� ������ ���� ���� ���� ���ڿ��� �Է¹ް�, ã�� ���ڿ��� ��ġ�� ���ڿ��� ���� �Է¹޾� ���ڿ��� ����
/*
string s;
cout << "���� ���� ���ڿ� �Է�, �Է� ���� &�����Դϴ�." << endl;
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
	cout << "������ : " << words << endl;
	words.replace(words.find(fstr), fstr.length(), rstr);
	cout<< "������ : " << words << endl;
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
//��������
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
		cout << "����" << endl;
	}
	int* p = &refn;
	if (&n == p) {
		cout << "p�� ����" << endl;
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
		cout << "����" << endl;
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
	//char& s[index] �������� ����.
	cout << ref << endl;
	ref = 't';
	cout << name << endl;
	*/

	/*Circle src(30);
	Circle desc(src);
	cout << "���� ����" << "\t"<<src.getArea() << endl;
	cout << "�纻 ����" << "\t" << desc.getArea() << endl;*/
	/*
	Person father(1, "White");
	Person daughter(2, "Purpl");
	cout << "daughter ��ü ���� ���� ----------" << endl;
	father.showName();
	daughter.showName();
	daughter.changeName("Grace");
	cout<< "daughter �̸��� Grace�� ������ �� ----------" << endl;
	father.showName();
	daughter.showName();
	*/
	/*
	Person father(1, "White");
	Person daughter(father);
	cout << "daughter ��ü ���� ���� ----------" << endl;
	father.showName();
	daughter.showName();
	daughter.changeName("Grace");
	cout << "daughter �̸��� Grace�� ������ �� ----------" << endl;
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

