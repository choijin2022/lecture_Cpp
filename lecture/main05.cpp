#include<iostream>
#include<string>
using namespace std;

int main() {
	/*
	cout << "�ּҸ� �Է��ϼ��� >> ";
	char address[100];
	cin.getline(address, 100);

	cout << "�ּҴ� " << address << "�Դϴ�." << endl;

	string song("Falling in love with you");
	string elvis("Elvos Presley");
	string singer;

	cout << song + "�� �θ� ������";
	cout << "(��Ʈ : ù ���ڴ� " << elvis[0] << " ) ";

	getline(cin, singer);
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�." << endl;
	else
		cout << "Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�." << endl;
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
	// Ű����κ��� �� �� ������ �о� �� ū ���� ȭ�鿡 ���
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2)
		cout << num1 << endl;
	else
		cout << num2 << endl;
}
