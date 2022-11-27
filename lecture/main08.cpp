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
	
	cout << "이름 : ";
	cin >> name;

	cout << "학번 : ";
	cin >> sid;
	cout << "학과 : ";
	cin >> dept;

ofstream fout;
fout.open("D:\\05.ect\\test.text",ios::out | ios::app);

if(!fout){
	cout << "D:\\05.ect\\test.text 경로의 파일을 열 수 없습니다." << endl;
	return 0;
}
fout << name << endl;
fout << sid << endl;
fout << dept << endl;
fout.close();

ifstream fin;
fin.open("D:\\05.ect\\test.text");
if (!fin) {
	cout << "D:\\05.ect\\test1.text을 열 수 없습니다" << endl;
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
	cout << "해당 파일을 열 수 없습니다" << endl;
	return 0;
}

int count = 0;
int c;
while ((c=fin2.get()) != EOF)
{
	cout << (char)c;
	count++;

}
cout << "읽은 바이트 수는 " << count << endl;
fin2.close();
*/
	
	const char* firstFile = "D:\\05.ect\\first.txt";
	const char* secondFile = "D:\\05.ect\\second.ini";
	const char* wordText = "D:\\05.ect\\word.txt";
	/*
	fstream fout(firstFile, ios::out | ios::app);
	if (!fout) {
		cout << firstFile << "열기 오류";
		return 0;
	}

	fstream fin(secondFile, ios::in);
	if (!fin) {
		cout << firstFile << "열기 오류";
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
		cout << firstFile << "열기 오류";
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
		cout << firstFile << "열기 오류";
		return 0;
	}
	fileRead(wordVector, fin);
	fin.close();

	cout << "word 파일을 읽었습니다." << endl;
	while (true)
	{
		cout << "검색할 단어를 입력하세요 >";
		string word;
		getline(cin, word);
		if (word == "exit")
			break;
		search(wordVector, word);
	}
	cout << "프로그램을 종료합니다." << endl;
	*/

	const char* srcFile = "D:\\05.ect\\img\\해돋이춘식.jpg";
	const char* destFile = "D:\\05.ect\\img\\test.jpg";
	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cout << srcFile << "열기 오류";
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << srcFile << "열기 오류";
		return 0;
	}

	int c;
	while ((c=fsrc.get()) != EOF)
	{
		fdest.put(c);
	}
	cout << srcFile << "을 " << destFile << "로 복사 완료!" << endl;
	fsrc.close();
	fdest.close();
}