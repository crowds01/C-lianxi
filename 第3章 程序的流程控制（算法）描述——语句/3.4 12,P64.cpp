/*用for循环语句求n！。
解：变量的设置和初始化与用while语句实现相同。*/

#include <iostream>
using namespace std;

int main()
{
	int n, i, f;
	cin >> n;
	for (i = 2, f = 1; i <= n; i++)
		f *= i;
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}