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
	ifstream inFile("student.dat", ios::in | ios::binary);
	if (!inFile)
	{
		cout << "error" << endl;
		return 0;
	}
	while (inFile.read((char*)&s, sizeof(s)))
	{
		int readedBytes = inFile.gcount();//看刚才读了多少个字节
		cout << s.name << " " << s.score << endl;
	}
	inFile.close();
	return 0;
}