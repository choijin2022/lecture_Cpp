#include<iostream>
#include<string>
#include"Random.h"

Random::Random() {
	for (int i = 0; i < 10; i++) {
		int n = next();
		std::cout << n << ' ';
	}
	std::cout << std::endl;
}

Random::Random(int start, int end) {
	for (int i = 0; i < 10; i++) {
		int n = nextInRange(start,end);
		std::cout << n << ' ';
	}
	std::cout << std::endl;
}

int Random::next() {
	return rand();
}

int Random::nextInRange(int start, int end) {
	int range = (end - start) + 1;
	return start + (rand() % range);
}