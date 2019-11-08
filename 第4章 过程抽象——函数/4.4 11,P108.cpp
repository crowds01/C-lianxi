/*编写求n!的递归函数。*/

#include <iostream>
using namespace std;

int f(int n);

int main()
{
	int n;
	cout << "请输入n的值：";
	cin >> n;
	cout << n << "的阶乘为：" << f(n) << endl;
	return 0;
}

int f(int n)
{
	if (n == 0)
		return 1;
	else
		return n * f(n - 1);
}