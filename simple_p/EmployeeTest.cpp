#include<iostream>
using namespace std;

//01. ȭ�鿡 1 employee list �����ִ� ���, 0 ���� ��� ����
int main() {

	cout << "Testint Emplyee "<< endl;
	while (true)
	{
		int cmd;
		cout << "0. exit" << endl << "1. employee list" << endl;
		cout << "��ɾ� >> ";
		cin >> cmd;
		switch (cmd)
		{
		case 0:
			cout << "���α׷��� �����մϴ�.";
			return 0;

		case 1:
			cout << "employee list" << endl;
			break;
		default:
			cout << "��ɾ �ٽ� �Է��ϼ���";
		}

	}


	return 0;
}
