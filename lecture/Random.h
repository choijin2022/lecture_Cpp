#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
/*
���� ���� �߻���Ű�� Random Ŭ���� �ۼ�.
Random Ŭ������
������, next(), nextInRange()�� ����Լ��� �������� �ۼ�.
*/

class Random {
public:
	Random();
	Random(int start, int end);
private:
	int next();
	int nextInRange(int start, int end );
};

