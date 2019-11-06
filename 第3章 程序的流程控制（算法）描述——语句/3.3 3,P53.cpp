/*从键盘输入三个整数，计算其中的最大者并输出之。
解：先从两个数中找出一个较大的，在把它与第三个数比较，较大者即为三者中的最大者*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, max;
	cout << "请输入三个整数：" << endl;
	cin >> a >> b >> c;
	if (a > b)
		max = a;
	else
		max = b;
	if (c > max)
		max = c;
	cout << "最大者为：" << max << endl;
	return 0;
}

//也可用条件操作符（?:）