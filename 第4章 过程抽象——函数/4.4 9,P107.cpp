/*编写计算第n个斐波那契数的递归函数。*/

#include <iostream>
using namespace std;

int fib(int n);

int main()
{
	int n = 0;
	cout << "请输入n的值：";
	cin >> n;
	cout << "第" << n << "个斐波那契数是" << fib(n);
	return 0;
}

int fib(int n)
{
	if (n == 1 || n == 2)//递归的特殊情形
		return 1;
	else//递归的一般情形
		return fib(n - 2) + fib(n - 1);
}