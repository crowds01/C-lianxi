/*判断键盘输入的一个整数是否为素数。
解：要判断一个数n是否为素数，通常的做法是：用2、3、...、n-1去除n，如果其中有一个数能整除n，则n不是素数，否则n为素数。*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 2;
	while (i < n && n % i != 0)
		i++;
	if (i == n)
		cout << n << "是素数。" << endl;
	else
		cout << n << "不是素数。" << endl;
	return 0;
}