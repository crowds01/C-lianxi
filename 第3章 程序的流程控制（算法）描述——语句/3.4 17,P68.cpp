/*���n��쳲�������Fibonacci������*/

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
	cout << "��" << n << "��쳲��������ǣ�" << fib_2 << endl;
	return 0;
}