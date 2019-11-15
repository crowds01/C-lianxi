/*从键盘输入几个学生的姓名和成绩，并以二进制文件形式保存*/

#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
	char name[20];
	int score;
};
int main()
{
	Student s;
	ofstream OutFile("c:\\tmp\\student.dat", ios::out | ios::binary);
	while (cin >> s.name >> s.score)
		OutFile.write((char*)&s, sizeof(s));
	OutFile.close();
	return 0;
}