#include<iostream>
#include<cstring>
#include<string>


using namespace std;

int main() {
	// �ǽ����� 01. 1~100���, �� �ٿ� 10����
	/*
	for (int i = 1; i <= 100; i++) {	
		cout << i << "\t";
		if (i % 10 == 0) {
			cout << endl;
		}
	}
	*/
	// �ǽ����� 02. ������ ���
	/*
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << 'x' << j << '=' << i + j << " ";
		}
		cout << endl;
	}
	*/
	// �ǽ����� 03.�� ������ input, �� �� ū ���� ���
	/*
	cout << "�� ������ �Է��ϼ��� >>";
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2) {
		cout << "max : "<<num1 << endl;
	}else{
		cout << "max : " << num2 << endl;
	}
	*/
	// �ǽ� 05. <����>Ű�� �Էµ� ������ ���ڵ��� �а�, �Էµ� ������ ������ ���
	// version 01
	/*
	char word[100];
	char find;
	cout << "�����ڸ� �Է��ϼ���(100�� �̸�)" << endl << ">>";
	
	cin >> word;

	cout << "���� ������ �˰� ���� ���ڸ� �Է��ϼ���" << endl;
	cin >> find;
	int length=0;
	int count = 0;
	for (int i = 0; i < 100; i++) {
		if (word[i] == '\0') {
			length = i;
			break;
		}
		if (word[i] == find) {
			++count;
		}
	}
	cout << find << "�� ���� : " << count << endl;
	//for (int j = 0; j < length; j++) {
	//	cout << "" << word[j]<<endl;
	//}
	*/
	// version 02 - cin.genline()�̿�
	/*
	char word[100];
	cout << "�����ڸ� �Է��ϼ���(100�� �̸�)" << endl;
	cin.getline(word, 100, '\n');
	cout << "�Էµ� ���� : " << word << endl;
	// ��� ������ ����
	*/
	// verwion 03 = string �̿�

	string word;
	string find;
	cout << "���ڸ� �Է��ϼ���"<<endl;
	getline(cin, word);
	cout << "ã�� ���ڸ� �Է��ϼ���" << endl;
	cin >> find;
	int find_len = find.length();
	int count = 0;
	bool isfinded = false;
	for (int j = 0; j < find_len; j++){
		for (int i = 0; i < word.length() - find_len + 1; i++) {
			
			if (word[i] == find[j]) {
				for (int n =i+1;n< word.length()- find_len;n++){
					for (int m = j + 1; m < find_len - 1; m++) {
						if (word[n] == find[m]) {
							isfinded = true;
							++count;
							

						}

					}
				}
			}
		}
	}
	if (ch_start == 0) {
		cout << "�ش� ���ڴ� �����ϴ�." << endl;
	}
	cout << find << "�� " << count << "�� �ֽ��ϴ�." << endl;

}