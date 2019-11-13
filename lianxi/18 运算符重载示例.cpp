/*运算符重载示例*/

#include <iostream>
using namespace std;

class Complex
{
public:
	double real, imag;
	Complex(double r=0.0,double i=0.0):real(r),imag(i) { }
	Complex operator- (const Complex& c);
};
Complex operator+ (const Complex& a, const Complex& b)
{
	return Complex(a.real + b.real, a.imag + b.imag);//返回一个临时对象
}
Complex Complex::operator-(const Complex& c)
{
	return Complex(real - c.real, imag - c.imag);//返回一个临时对象
}
//重载为成员函数时，形参个数为运算符目数的个数减一
//重载为普通函数时，形参个数为运算符目数的个数

int main()
{
	Complex a(4, 4), b(1, 1), c;
	c = a + b;//等价于c=operator+(a,b);
	cout << c.real << "," << c.imag << endl;
	cout << (a - b).real << "," << (a - b).imag << endl;
	//a-b等价于a.operator-(b)
	return 0;
}