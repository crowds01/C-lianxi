/*求第n个斐波那契（Fibonacci）数。*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int fib_1 = 1;
	int fib_2 = 1;
	for (int i = 3; i <= n; i++)
	{
		int temp = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = temp;
	}
	cout << "第" << n << "个斐波那契数是：" << fib_2 << endl;
	return 0;
}