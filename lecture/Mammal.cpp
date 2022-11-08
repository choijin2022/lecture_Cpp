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
	virtual void speak() { cout << "µ¿¹°ÀÌ ¿ï´Ù" << endl; }
	virtual void action() { cout << species << "°¡ ¿òÁ÷ÀÌ´Ù" << endl; }
	void show() { cout << age << "»ì µÈ " << color <<" " << species << "°¡ ¸»ÇÑ´Ù" << endl; }

};
class Dog : public Mammal {
public:
	Dog(int age, string color) { set(age, color, "°³"); }
	void speak(){ cout << "¸Û¸Û Â¢´Ù!" << endl; }
	void action(){ cout << species << "°¡ ²¿¸®¸¦ »ì¶û Èçµç´Ù" << endl; }
};
class Cat :public Mammal {
public:
	Cat(int age, string color) { set(age, color, "°í¾çÀÌ"); }
	void speak() { cout << "¾ß¿Ë¾ß¿Ë ¿ï´Ù" << endl; }
	void action() { cout << species << "°¡ ÇÞºµ ¾Æ·¡¼­ ³·ÀáÀ» ÀÚ´Ù" << endl; }
};
class Raccoon :public Mammal {
public:
	Raccoon(int age, string color) { set(age, color, "³Ê±¸¸®"); }
	void speak() { cout << "³Ê±¸¸®°¡ ¿ï´Ù" << endl; }
	void action() { cout << species << "°¡ ¸ÔÀÌ¸¦ ¾Ä´Â´Ù" << endl; }
};
class Crow : public Mammal {
public:
	Crow(int age, string color) { set(age, color, "±î¸¶±Í"); }
	void speak() { cout << "±î¾Ç±î¾Ç ¿ï´Ù" << endl; }
	void action() { cout << species << "°¡ ÇÏ´ÃÀ» ³¯´Ù" << endl; }
};
int main() {
	Dog temi(7,"Èò»ö");
	Cat choonsik(3, "¾ó·è»ö");
	Raccoon neoguri(5, "È¸»ö");
	Crow crow(2, "°ËÀº»ö");

	temi.show();
	temi.action();
	choonsik.show();
	neoguri.show();
	crow.show();
}
