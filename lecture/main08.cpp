#include<fstream>
#include<iostream>
using namespace std;

int main() {
	char name[20], dept[20];
	int sid;
	/*
	cout << "�̸� : ";
	cin >> name;

	cout << "�й� : ";
	cin >> sid;
	cout << "�а� : ";
	cin >> dept;

ofstream fout;
fout.open("D:\\05.ect\\test.text");

if(!fout){
	cout << "D:\\05.ect\\test.text ����� ������ �� �� �����ϴ�." << endl;
	return 0;
}
fout << name << endl;
fout << sid << endl;
fout << dept << endl;
fout.close();
*/
ifstream fin;
fin.open("D:\\05.ect\\test.text");
if (!fin) {
	cout << "D:\\05.ect\\test1.text�� �� �� �����ϴ�" << endl;
	return 0;
}
fin >> name;
fin >> sid;
fin >> dept;
cout << name << endl;
cout << sid << endl;
cout << dept << endl;

fin.close();


}