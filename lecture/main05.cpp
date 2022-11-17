#include<iostream>
#include<string>
using namespace std;

int main() {
	/*
	cout << "주소를 입력하세요 >> ";
	char address[100];
	cin.getline(address, 100);

	cout << "주소는 " << address << "입니다." << endl;

	string song("Falling in love with you");
	string elvis("Elvos Presley");
	string singer;

	cout << song + "를 부른 가수는";
	cout << "(힌트 : 첫 글자는 " << elvis[0] << " ) ";

	getline(cin, singer);
	if (singer == elvis)
		cout << "맞았습니다." << endl;
	else
		cout << "틀렸습니다." + elvis + "입니다." << endl;
		*/
	
	/*
	for (int i = 1; i <= 100; i++) {
		
		cout << i << '\t';
		if (i % 10 == 0)
			cout << endl;

	}
	*/
	/*
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j<<"\t";
		}
		cout << endl;
	}
	*/
	// 키보드로부터 두 개 정수를 읽어 더 큰 수를 화면에 출력
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2)
		cout << num1 << endl;
	else
		cout << num2 << endl;
}
