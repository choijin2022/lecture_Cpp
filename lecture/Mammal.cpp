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
	void show() { cout << age << "»ì µÈ " << color << " " << species << "°¡ ¸»ÇÑ´Ù" << endl; };

};
class Dog : public Mammal {
public:
	Dog(int age, string color) { set(age, color, "°³"); }
	
	void speak(){ cout << "¸Û¸Û Â¢´Ù!" << endl; }
	void action(){ cout << getSpecies() << "°¡ ²¿¸®¸¦ »ì¶û Èçµç´Ù" << endl; }
};
class Cat :public Mammal {
public:
	Cat(int age, string color) { set(age, color, "°í¾çÀÌ"); }
	void speak() { cout << "¾ß¿Ë¾ß¿Ë ¿ï´Ù" << endl; }
	void action() { cout << getSpecies() << "°¡ ÇÞºµ ¾Æ·¡¼­ ³·ÀáÀ» ÀÚ´Ù" << endl; }
};
class Raccoon :public Mammal {
public:
	Raccoon(int age, string color) { set(age, color, "³Ê±¸¸®"); }
	void speak() { cout << "³Ê±¸¸®°¡ ¿ï´Ù" << endl; }
	void action() { cout << getSpecies() << "°¡ ¸ÔÀÌ¸¦ ¾Ä´Â´Ù" << endl; }
};
class Crow : public Mammal {
public:
	Crow(int age, string color) { set(age, color, "±î¸¶±Í"); }
	void speak() { cout << "±î¾Ç±î¾Ç ¿ï´Ù" << endl; }
	void action() { cout << getSpecies() << "°¡ ÇÏ´ÃÀ» ³¯´Ù" << endl; }
};


int main() {
	
	Dog * temi = new Dog(7, "Èò»ö");
	temi->show();
	temi->action();
	
	Cat * choonsik = new Cat(3, "¾ó·è");
	choonsik->show();
	choonsik->action();

	Raccoon* neoguri = new Raccoon(5, "È¸»ö");
	neoguri->show();
	neoguri->action();

	Crow* crow = new Crow(2, "°ËÁ¤»ö");
	crow->show();
	crow->action();

	delete temi;
	delete choonsik;
	delete neoguri;
	delete crow;
		 
}
