#include<iostream>
#include<cstring>
using namespace std;

int stringTolnt(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if ( x[i] >='0' && x[i] <='9') {
			sum = sum * 10 + x[i] - '0';
		}
		else
			throw x;
	}
	return sum;
}

/*
int getExp(int base, int exp) {
	int value = 1;
	for (int n = 0; n < exp; n++) {
		value = value * base;
	}
	return value;
}
*/
/*
int getExp(int base, int exp) {
	if (base <= 0 || exp <= 0) {
		return -1;
	}
	int value = 1;
	for (int n = 0; n < exp; n++) {
		value = value * base;
	}
	return value;
}
*/
int main() {
	/*
	int v = 0;
	v = getExp(2, 3);
	if (v != -1) {
	cout << "2의 3승은 " << v << "입니다." << endl;

	}
	else
		cout<<"오류 !! 2의 3승은 " << "계산할 수 없습니다." << endl;
	int e = 0;
		e= getExp(2, -3);
	if(e != -1) {
		cout << "2의 -3승은 " << e << "입니다." << endl;

	}
	else
		cout << "오류 !! 2의 -3승은 " << "계산할 수 없습니다." << endl;
		
	int sum, n, average;
	while (true) {
		cout << "합을 구하세요 >> ";
		cin >> sum;
		cout << "인원수를 구하세요 >>";
		cin >> n;
		try {
			if (n <= 0)
				throw n;
			else {
				average = sum / n;
				
			}
		}
			catch (int x) {
				cout << "예외 발생 ! " << x << "으로 나눌 수 없음." << endl;
				average = 0;
				cout << endl;
				continue;

			}
			cout << "평균 : " << average << endl;
	}
	*/
	// 문자열을 정수로 변환하기
	int n;
	try {
		n = stringTolnt("123");
		cout << "\"123\"은 정수 " << n << "으로 변환됨" << endl;
		n = stringTolnt("1A3");
		cout << "\"1A3\"은 정수 " << n << "으로 변환됨" << endl;
	}
	catch (const char* s) {
		cout << s << " 처리에서 예외 발생! " << endl;
		return 0;
	}
}
