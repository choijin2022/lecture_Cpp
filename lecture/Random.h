#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
/*
랜덤 수를 발생시키는 Random 클래스 작성.
Random 클래스는
생성자, next(), nextInRange()의 멤버함수를 가지도록 작성.
*/

class Random {
public:
	Random();
	Random(int start, int end);
private:
	int next();
	int nextInRange(int start, int end );
};

