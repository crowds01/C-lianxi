/*��ֵ���������*/

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
	//�����ӵĳ�Ա����
	String& operator=(const String& s);
	~String() { delete[]str; }
};
String& String::operator=(const char* s)
{
	//���ء�=����ʹ��obj="hello"�ܹ�����
	delete[]str;
	str = new char[strlen(s) + 1];
	strcpy(str, s);
	return *this;
}
String& String::operator=(const String& s)
{
	if (this == &s)//�����Լ����Լ���ֵʱ��delete���³���
		return *this;
	delete[]str;
	str = new char[strlen(s.str) + 1];
	strcpy(str, s.str);
	return *this;
}

int main()
{
	String s;
	s = "Good Luck,";//�ȼ���s.operator=("Good Luck,");
	cout << s.c_str() << endl;
	//String s2="hello!";//����������ø��ƹ��캯������Ҫע�͵���Ȼ�������Ϊ�������캯���Ĳ�����ͬ�������
	s = "Shenzhou 8!";//�ȼ���s.operator=("Shenzhou 8!");
	cout << s.c_str() << endl;
	//ǳ���������
	String s1, s2;
	s1 = "this";
	s2 = "that";
	s1 = s2;//ֻ�Ǹı�ָ�룬�ᵼ���ڴ�й©����s1���¸�ֵʱ�ᵼ��delete���ݣ�s2��ָ����delete�Ŀռ�������Ҫ�µ����غ���
	return 0;
}