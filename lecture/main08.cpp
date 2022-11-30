#include<fstream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	string line;
	while (getline(fin, line)){
		v.push_back(line);
	}
}
void search(vector<string>& v, string word) {
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1) {
			cout << v[i] << endl;
		}
	}
}
int main() {
	/*
	char name[20], dept[20];
	int sid;
	
	cout << "�̸� : ";
	cin >> name;

	cout << "�й� : ";
	cin >> sid;
	cout << "�а� : ";
	cin >> dept;

ofstream fout;
fout.open("D:\\05.ect\\test.text",ios::out | ios::app);

if(!fout){
	cout << "D:\\05.ect\\test.text ����� ������ �� �� �����ϴ�." << endl;
	return 0;
}
fout << name << endl;
fout << sid << endl;
fout << dept << endl;
fout.close();

ifstream fin;
fin.open("D:\\05.ect\\test.text");
if (!fin) {
	cout << "D:\\05.ect\\test1.text�� �� �� �����ϴ�" << endl;
	return 0;
}
fin >> name;
fin >> sid;
fin >> dept;
cout << name << endl;
cout << sid << endl;
cout << dept << endl;

fin.close();

const char* file = "C:\\sts_tomcat\\sts-4.15.3.RELEASE\\SpringToolSuite4.ini";

ifstream fin2(file);
if (!fin2) {
	cout << "�ش� ������ �� �� �����ϴ�" << endl;
	return 0;
}

int count = 0;
int c;
while ((c=fin2.get()) != EOF)
{
	cout << (char)c;
	count++;

}
cout << "���� ����Ʈ ���� " << count << endl;
fin2.close();
*/
	/*
	const char* firstFile = "D:\\05.ect\\first.txt";
	const char* secondFile = "D:\\05.ect\\second.ini";
	const char* wordText = "D:\\05.ect\\word.txt";
	*/
	/*
	fstream fout(firstFile, ios::out | ios::app);
	if (!fout) {
		cout << firstFile << "���� ����";
		return 0;
	}

	fstream fin(secondFile, ios::in);
	if (!fin) {
		cout << firstFile << "���� ����";
		return 0;
	}

	int c;
	while ((c=fin.get()) != EOF)
	{
		fout.put(c);
	}
	fin.close();
	fout.close();
	*/
	/*
	fstream fin(secondFile, ios::in);
	if (!fin) {
		cout << firstFile << "���� ����";
		return 0;
	}
	char buf[81];
	while (fin.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	fin.close();
	*/
	/*
	vector<string> wordVector;
	ifstream fin(wordText);
	if (!fin) {
		cout << firstFile << "���� ����";
		return 0;
	}
	fileRead(wordVector, fin);
	fin.close();

	cout << "word ������ �о����ϴ�." << endl;
	while (true)
	{
		cout << "�˻��� �ܾ �Է��ϼ��� >";
		string word;
		getline(cin, word);
		if (word == "exit")
			break;
		search(wordVector, word);
	}
	cout << "���α׷��� �����մϴ�." << endl;
	*/
	/*
	const char* srcFile = "D:\\05.ect\\img\\�ص������.jpg";
	const char* destFile = "D:\\05.ect\\img\\test.jpg";
	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cout << srcFile << "���� ����";
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << srcFile << "���� ����";
		return 0;
	}

	int c;
	while ((c=fsrc.get()) != EOF)
	{
		fdest.put(c);
	}
	cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�!" << endl;
	fsrc.close();
	fdest.close();
	*/
/*
const char* file = "D:\\05.ect\\second.ini";

ifstream fin;
fin.open(file, ios::binary);
if (!fin) {
	cout << "���� ����"<<endl;
	return 0;
}

int count = 0;
char s[32];
while (!fin.eof()) {
	fin.read(s, 32);
	int n = fin.gcount();
	cout.write(s, n);
	count += n;

}
cout << "���� ����Ʈ ����" <<count<< endl;
fin.close();

*/
/*
ifstream fin("D:\\05.ect\\test.txt");
if (!fin) {
	cout << "���� ����" << endl;
	return 0;
}
int ch;

while ((ch = fin.get()) != EOF) {
	cout.put(ch);
	
}
fin.close();

*/
/*
ifstream fin("D:\\05.ect\\second.ini");
if (!fin) {
	cout << "���� ����" << endl;
	return 0;
}
string line;
int lineNumber = 1;

while(getline(fin, line)) {
	
	cout << lineNumber << " : " << line << endl;
	lineNumber++;
}
fin.close();

*/
/*
ifstream fin("D:\\05.ect\\second.ini");
if (!fin) {
	cout << "���� ����" << endl;
	return 0;
}


ofstream fout("D:\\05.ect\\first.txt");
if (!fout) {
	cout << "���� ����" << endl;
	return 0;
}

int ch;
cout << "�б� ����" << endl;
while ((ch = fin.get()) != EOF) {
	ch = (char)toupper(ch);
	cout << (char)ch;
	fout.put(ch);
	

}

fout.close();
fin.close();

*/

ifstream fin("D:\\05.ect\\second.ini",ios::in|ios::binary);
if (!fin) {
	cout << "���� ����" << endl;
	return 0;
}


ofstream fout("D:\\05.ect\\first.txt",ios::out,ios::binary);
if (!fout) {
	cout << "���� ����" << endl;
	return 0;
}


fin.seekg(0, ios::end);
int finSize = fin.tellg();
fin.seekg(0, ios::beg);

int copyUnit = finSize / 10;
char* buf = new char[copyUnit];
cout << "���� ����" << endl;
for (int i = 0; i < 10; i++) {
	fin.read(buf, copyUnit);
	int realByte = fin.gcount();
	fout.write(buf, realByte);
	cout << '.' << realByte << "B " << (i + 1) * 10 << "% " << endl;
	if (realByte < copyUnit)
		break;
}
cout << finSize << "B ���� �Ϸ�" <<  endl;

delete[] buf;
fin.close();
fout.close();

}


