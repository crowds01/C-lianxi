/*���������ʾ��*/

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
	return Complex(a.real + b.real, a.imag + b.imag);//����һ����ʱ����
}
Complex Complex::operator-(const Complex& c)
{
	return Complex(real - c.real, imag - c.imag);//����һ����ʱ����
}
//����Ϊ��Ա����ʱ���βθ���Ϊ�����Ŀ���ĸ�����һ
//����Ϊ��ͨ����ʱ���βθ���Ϊ�����Ŀ���ĸ���

int main()
{
	Complex a(4, 4), b(1, 1), c;
	c = a + b;//�ȼ���c=operator+(a,b);
	cout << c.real << "," << c.imag << endl;
	cout << (a - b).real << "," << (a - b).imag << endl;
	//a-b�ȼ���a.operator-(b)
	return 0;
}