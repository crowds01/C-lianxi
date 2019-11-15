/*�ö����ƶ�дʵ���ļ���������
�÷�ʾ����
mycopy src.dat dest.dat
����src.dat������dest.dat  ���dest.datԭ�����У����Ḳ��dest.dat*/

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "File name missing!" << endl;
		return 0;
	}
	ifstream inFile(argv[1], ios::binary | ios::in);//���ļ����ڶ�

	if (!inFile)
	{
		cout << "Source file open error." << endl;
		return 0;
	}

	ofstream outFile(argv[2], ios::binary | ios::out);//���ļ�����д

	if (!outFile)
	{
		cout << "New file open error." << endl;
		inFile.close();
		return 0;
	}
	char c;
	while (inFile.get(c))//ÿ�ζ�ȡһ���ַ�
		outFile.put(c);//ÿ��д��һ���ַ�
	outFile.close();
	inFile.close();
	return 0;
}