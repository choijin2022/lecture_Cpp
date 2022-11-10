#include<iostream>
#include<string>
using namespace std;

class Mammal {

	int age;
	string color;
	string species;
protected:
	virtual void speak() = 0;
	virtual void action() = 0;
public:
	Mammal() { set(); };
	virtual void set(int age=0, string color="none", string species="mammal") {
		this->age = age;
		this->color = color;
		this->species = species;
	}
	string getSpecies() { return species; };
	void show() { cout << age << "�� �� " << color << " " << species << "�� ���Ѵ�" << endl; };

};
class Dog : public Mammal {
public:
	Dog(int age, string color) { set(age, color, "��"); }
	
	void speak(){ cout << "�۸� ¢��!" << endl; }
	void action(){ cout << getSpecies() << "�� ������ ��� ����" << endl; }
};
class Cat :public Mammal {
public:
	Cat(int age, string color) { set(age, color, "�����"); }
	void speak() { cout << "�߿˾߿� ���" << endl; }
	void action() { cout << getSpecies() << "�� �޺� �Ʒ��� ������ �ڴ�" << endl; }
};
class Raccoon :public Mammal {
public:
	Raccoon(int age, string color) { set(age, color, "�ʱ���"); }
	void speak() { cout << "�ʱ����� ���" << endl; }
	void action() { cout << getSpecies() << "�� ���̸� �Ĵ´�" << endl; }
};
class Crow : public Mammal {
public:
	Crow(int age, string color) { set(age, color, "���"); }
	void speak() { cout << "��Ǳ�� ���" << endl; }
	void action() { cout << getSpecies() << "�� �ϴ��� ����" << endl; }
};


int main() {
	
	Dog * temi = new Dog(7, "���");
	temi->show();
	temi->action();
	
	Cat * choonsik = new Cat(3, "���");
	choonsik->show();
	choonsik->action();

	Raccoon* neoguri = new Raccoon(5, "ȸ��");
	neoguri->show();
	neoguri->action();

	Crow* crow = new Crow(2, "������");
	crow->show();
	crow->action();

	delete temi;
	delete choonsik;
	delete neoguri;
	delete crow;
		 
}
