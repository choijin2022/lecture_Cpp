#include<iostream>
using namespace std;

//01. 화면에 1 employee list 보여주는 기능, 0 종료 기능 구현
int main() {

	cout << "Testint Emplyee "<< endl;
	while (true)
	{
		int cmd;
		cout << "0. exit" << endl << "1. employee list" << endl;
		cout << "명령어 >> ";
		cin >> cmd;
		switch (cmd)
		{
		case 0:
			cout << "프로그램을 종료합니다.";
			return 0;

		case 1:
			cout << "employee list" << endl;
			break;
		default:
			cout << "명령어를 다시 입력하세요";
		}

	}


	return 0;
}
