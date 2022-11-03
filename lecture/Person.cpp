#define _CRT_SECURE_NO_WARNINGS
#include"Person.h"
Person::Person() {
	cout<<this->name;
}
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}
Person::Person(const Person& person) {
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "���� ������ ���� " << this->name << endl;
}

void Person::changeName(const char* name) {
	if (strlen(this->name) < strlen(name)) {
		cout << "�̸� ���� �Ұ�" << endl;
		return;
	}

	strcpy(this->name, name);
}
void Person::showName() {
	cout << "���̵� : " << id << ", " << "�̸� : " << this->name << endl;

}
