/*定义一个字符串类（用成员函数方式实现其基本操作）。*/

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
	int length();//取字符串长度
	char& char_at(int i);//返回指定位置上字符的引用
	const char* get_str();//返回字符串指针
	//下面两个重载函数实现字符串复制功能
	String& copy(const char* p);
	String& copy(const String& s);
	//下面两个函数实现字符串拼接功能
	String& append(const char* p);
	String& append(const String& s);
	//下面两个函数实现字符串比较功能
	int compare(const char* p);
	int compare(const String& s);
};

String::String()
{
	str = NULL;
}
String::String(const char* p)
{
	str = new char[strlen(p) + 1];//申请资源
	strcpy(str, p);
}
String::~String()
{
	delete[]str;//归还资源
	str = NULL;//一般情况下不需要这条语句。有时需要
}
int String::length()
{
	return strlen(str);
}
char& String::char_at(int i)
{
	if (i < 0 || i >= strlen(str))
	{
		cerr << "超出字符串范围！\n";
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
	delete[]str;//归还原来的资源
	str = new char[strlen(p) + 1];//申请新的资源
	strcpy(str, p);
	return *this;
}
String& String::copy(const String& s)
{
	return copy(s.str);
}
String& String::append(const char* p)
{
	char* p1 = new char[strlen(str) + strlen(p) + 1];//申请新的资源
	strcpy(p1, str);
	strcat(p1, p);
	delete[]str;//归还原来的资源
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
	s1.copy("xyz");//把“xyz”复制到s1中
	s2.append(s1);//在s2的字符串后面添加一个由s1表示的子串
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