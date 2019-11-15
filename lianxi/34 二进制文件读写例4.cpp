/*二进制文件读写
利用二进制读写操作修改内容*/

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
	if (!iofile)//判断文件打开是否成功
	{
		cout << "error";
		return 0;
	}
	iofile.seekp(2 * sizeof(s), ios::beg);//定义写指针到开头
	iofile.write("Mike", strlen("Mike") + 1);
	iofile.seekg(0, ios::beg);//定位读指针到开通
	while (iofile.read((char*)&s, sizeof(s)))
		cout << s.name << " " << s.score << endl;
	iofile.close();
	return 0;
}