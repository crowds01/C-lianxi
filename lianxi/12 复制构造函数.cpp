#include <iostream>
using namespace std;

class Complex
{
public:
	double real, imag;
	Complex() { }
	Complex(const Complex& c)
	{
		real = c.real;
		imag = c.imag;
		cout << "Copy Constructor called";
	}
};

int main()
{
	Complex c1;
	Complex c2(c1);//�ȼ���Complex c2=c1; ���ǳ�ʼ�����������Ǹ�ֵ
	//����丳ֵ�������¸��ƹ��캯��������
	return 0;
}