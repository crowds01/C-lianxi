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
	Complex c2(c1);//等价于Complex c2=c1; 这是初始化操作，不是赋值
	//对象间赋值并不导致复制构造函数被调用
	return 0;
}