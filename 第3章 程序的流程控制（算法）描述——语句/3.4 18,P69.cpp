/*用牛顿迭代法求a^1/3
解：迭代公式为：xn+1=1/3(2xn+a/xn^2)，当|xn+1-xn|<ε（一个很小的数）时，xn+1即为a^1/3的值*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double EPS = 1e-6;
	double a, x1, x2;
	cout << "请输入一个数：";
	cin >> a;
	x2 = a;
	do
	{
		x1 = x2;
		x2 = (2 * x1 + a / (x1 * x1)) / 3;
	} while (fabs(x2 - x1) >= EPS);
	cout << a << "的立方根是：" << x2 << endl;
	return 0;
}