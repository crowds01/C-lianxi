/*�������ļ���д
���ö����ƶ�д�����޸�����*/

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
	fstream iofile("c:\\tmp\\students.dat", ios::in | ios::out | ios::binary);
	if (!iofile)//�ж��ļ����Ƿ�ɹ�
	{
		cout << "error";
		return 0;
	}
	iofile.seekp(2 * sizeof(s), ios::beg);//����дָ�뵽��ͷ
	iofile.write("Mike", strlen("Mike") + 1);
	iofile.seekg(0, ios::beg);//��λ��ָ�뵽��ͨ
	while (iofile.read((char*)&s, sizeof(s)))
		cout << s.name << " " << s.score << endl;
	iofile.close();
	return 0;
}