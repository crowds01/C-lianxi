/*编写一个求x^n的函数，其中，x为double类型，n为整数类型。
解：C++语言本身没有提供一个操作能够完成x^n的计算，这时，可以在程序中定义一个函数来实现。（实际上，在C++标准库中提供了相应的函数）*/

#include <iostream>
using namespace std;

double power(double x, int n);

int main()
{
	double x;
	int n;
	cout << "请输入x和n的大小：";
	cin >> x >> n;
	cout << "x的n次幂的值为：" << power(x, n) << endl;
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