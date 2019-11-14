/*赋值运算符重载*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class String
{
private:
	char* str;
public:
	String() :str(new char[1]) { str[0] = 0; }
	const char* c_str() { return str; }
	String& operator=(const char* s);
	//新增加的成员函数
	String& operator=(const String& s);
	~String() { delete[]str; }
};
String& String::operator=(const char* s)
{
	//重载“=”以使得obj="hello"能够成立
	delete[]str;
	str = new char[strlen(s) + 1];
	strcpy(str, s);
	return *this;
}
String& String::operator=(const String& s)
{
	if (this == &s)//避免自己给自己赋值时先delete导致出错
		return *this;
	delete[]str;
	str = new char[strlen(s.str) + 1];
	strcpy(str, s.str);
	return *this;
}

int main()
{
	String s;
	s = "Good Luck,";//等价于s.operator=("Good Luck,");
	cout << s.c_str() << endl;
	//String s2="hello!";//这条语句会调用复制构造函数，需要注释掉不然会出错，因为拷贝构造函数的参数是同类的引用
	s = "Shenzhou 8!";//等价于s.operator=("Shenzhou 8!");
	cout << s.c_str() << endl;
	//浅拷贝与深拷贝
	String s1, s2;
	s1 = "this";
	s2 = "that";
	s1 = s2;//只是改变指针，会导致内存泄漏；当s1重新赋值时会导致delete内容，s2就指向了delete的空间会出错，需要新的重载函数
	return 0;
}