#include<iostream>
#include<string>
using namespace std;

class Mammal {
protected:
	int age;
	string color;
	string species;
public:
	Mammal() { set(); };
	virtual void set(int age=0, string color="none", string species="mammal") {
		this->age = age;
		this->color = color;
		this->species = species;
	}
	virtual void speak() { cout << "������ ���" << endl; }
	virtual void action() { cout << species << "�� �����̴�" << endl; }
	void show() { cout << age << "�� �� " << color <<" " << species << "�� ���Ѵ�" << endl; }

};
class Dog : public Mammal {
public:
	Dog(int age, string color) { set(age, color, "��"); }
	void speak(){ cout << "�۸� ¢��!" << endl; }
	void action(){ cout << species << "�� ������ ��� ����" << endl; }
};
class Cat :public Mammal {
public:
	Cat(int age, string color) { set(age, color, "�����"); }
	void speak() { cout << "�߿˾߿� ���" << endl; }
	void action() { cout << species << "�� �޺� �Ʒ��� ������ �ڴ�" << endl; }
};
class Raccoon :public Mammal {
public:
	Raccoon(int age, string color) { set(age, color, "�ʱ���"); }
	void speak() { cout << "�ʱ����� ���" << endl; }
	void action() { cout << species << "�� ���̸� �Ĵ´�" << endl; }
};
class Crow : public Mammal {
public:
	Crow(int age, string color) { set(age, color, "���"); }
	void speak() { cout << "��Ǳ�� ���" << endl; }
	void action() { cout << species << "�� �ϴ��� ����" << endl; }
};
int main() {
	Dog temi(7,"���");
	Cat choonsik(3, "����");
	Raccoon neoguri(5, "ȸ��");
	Crow crow(2, "������");

	temi.show();
	temi.action();
	choonsik.show();
	neoguri.show();
	crow.show();
}
