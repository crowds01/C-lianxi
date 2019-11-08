/*用递归函数实现求两个正整数的最大公约数。
解：辗转相除法*/

#include <iostream>
using namespace std;

int gcd(int x, int y);

int main()
{
	int x, y;
	cout << "请输入x和y的值：";
	cin >> x >> y;
	cout << x << "和" << y << "的最大公约数是：" << gcd(x, y);
	return 0;
}

int gcd(int x, int y)
{
	return (y == 0) ? x : gcd(y, x % y);
}