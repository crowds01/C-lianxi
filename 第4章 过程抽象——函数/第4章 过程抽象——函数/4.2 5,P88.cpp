/*函数调用的值参数传递过程。
解：调用4-2中定义的power函数*/

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