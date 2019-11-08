/*求x^n的递归函数。
解：x^n可定义成：
		x*x^n-1 (n>0)
		1 (n=0)
		1/x^-n (n<0)
求x^n可化解成求x^n-1的问题*/

#include <iostream>
using namespace std;

double power(double x, int n);

int main()
{
	double x;
	int n;
	cout << "请输入x和n的值：";
	cin >> x >> n;
	cout << power(x, n);
	return 0;
}

double power(double x, int n)
{
	if (x == 0)
	{
		if (n == 0)
			return -1;
		else
			return 0;
	}
	if (n == 0)
		return 1;
	else if (n > 0)
		return x * power(x, n - 1);
	else
		return power(x, -n);
}