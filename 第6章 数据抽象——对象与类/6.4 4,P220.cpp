/*����һ���ַ����ࣨ�ó�Ա������ʽʵ���������������*/

#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class String
{
	char* str;
public:
	String();
	String(const char* p);
	~String();
	int length();//ȡ�ַ�������
	char& char_at(int i);//����ָ��λ�����ַ�������
	const char* get_str();//�����ַ���ָ��
	//�����������غ���ʵ���ַ������ƹ���
	String& copy(const char* p);
	String& copy(const String& s);
	//������������ʵ���ַ���ƴ�ӹ���
	String& append(const char* p);
	String& append(const String& s);
	//������������ʵ���ַ����ȽϹ���
	int compare(const char* p);
	int compare(const String& s);
};

String::String()
{
	str = NULL;
}
String::String(const char* p)
{
	str = new char[strlen(p) + 1];//������Դ
	strcpy(str, p);
}
String::~String()
{
	delete[]str;//�黹��Դ
	str = NULL;//һ������²���Ҫ������䡣��ʱ��Ҫ
}
int String::length()
{
	return strlen(str);
}
char& String::char_at(int i)
{
	if (i < 0 || i >= strlen(str))
	{
		cerr << "�����ַ�����Χ��\n";
		exit(-1);
	}
	return str[i];
}
const char* String::get_str()
{
	return str;
}
String& String::copy(const char* p)
{
	delete[]str;//�黹ԭ������Դ
	str = new char[strlen(p) + 1];//�����µ���Դ
	strcpy(str, p);
	return *this;
}
String& String::copy(const String& s)
{
	return copy(s.str);
}
String& String::append(const char* p)
{
	char* p1 = new char[strlen(str) + strlen(p) + 1];//�����µ���Դ
	strcpy(p1, str);
	strcat(p1, p);
	delete[]str;//�黹ԭ������Դ
	str = p1;
	return *this;
}
String& String::append(const String& s)
{
	return append(s.str);
}
int String::compare(const char* p)
{
	return strcmp(str, p);
}
int String::compare(const String& s)
{
	return strcmp(str, s.str);
}

int main()
{
	String s1;
	String s2("abcdefg");
	s1.copy("xyz");//�ѡ�xyz�����Ƶ�s1��
	s2.append(s1);//��s2���ַ����������һ����s1��ʾ���Ӵ�
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2.char_at(i) >= 'a' && s2.char_at(i) <= 'z')
			s2.char_at(i) = s2.char_at(i) - 'a' + 'A';
	}
	if (s2.compare("ABCDEFGXYZ") == 0)
		cout << "OK\n";
	cout << s1.get_str() << endl << s2.get_str() << endl;
	return 0;
}