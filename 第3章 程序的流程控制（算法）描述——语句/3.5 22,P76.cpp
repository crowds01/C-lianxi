/*从键盘输入一些非零整数，然后输出其中所有正数的平方根。
解：这是一个事件控制的循环，循环执行到读入0为止。循环中对读入的正数求其平方根，而对于负数则不做任何事情。*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	double square_root;
	cout << "请输入若干整数（以0结束）：";
	for (cin >> n; n != 0; cin >> n)
	{
		if (n < 0) continue;
		square_root = sqrt(double(n));
		cout << n << "的平方根是：" << square_root << endl;
	}
	return 0;
}