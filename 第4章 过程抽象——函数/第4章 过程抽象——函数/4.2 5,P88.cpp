/*�������õ�ֵ�������ݹ��̡�
�⣺����4-2�ж����power����*/

#include <iostream>
using namespace std;

double power(double x, int n);

int main()
{
	double a = 3.0, c;
	int b = 4;
	c = power(a, b);
	cout << a << "," << b << "," << c << endl;
	return 0;
}

double power(double x, int n)
{
	if (x == 0) return 0;
	double product = 1.0;
	if (n >= 0)
		while (n > 0)
		{
			product *= x;
			n--;
		}
	else
		while (n < 0)
		{
			product /= x;
			n++;
		}
	return product;
}