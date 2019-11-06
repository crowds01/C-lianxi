/*计算从键盘输入的一系列整数的和，要求输入以0结束。
解：这也是一个循环求和的问题。但由于在循环之前不知道循环的次数，它必须根据每一次从键盘输入的值是否为0来决定，因此，它属于一种事件控制的循环，
这时，循环体是否需要执行要依赖于上一次循环操作的结果。该循环可用while语句来实现。*/

#include <iostream>
using namespace std;

int main()
{
	int a, sum = 0;
	cout << "请输入若干个整数（以0结束）：";
	cin >> a;
	while (a != 0)
	{
		sum += a;
		cin >> a;
	}
	cout << "输入的整数的和是：" << sum << endl;
	return 0;
}