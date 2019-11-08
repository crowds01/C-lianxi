/*编写一个求n!的函数。*/

#include <iostream>
using namespace std;

extern int factorial(int n);

int main()
{
	int n;
	cout << "请输入n的值：";
	cin >> n;
	int f = factorial(n);
	cout << n << "的阶乘是：" << f << endl;
	return 0;
}

int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}