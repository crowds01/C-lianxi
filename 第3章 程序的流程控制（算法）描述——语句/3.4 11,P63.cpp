/*用do-while循环语句求n!。
解：变量的设置与前面用while语句实现的相同，不同之处在于i的取值是从1开始的。*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 1, f = 1;//循环初始化
	do
	{
		f *= i;
		i++;
	} while (i <= n);
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}