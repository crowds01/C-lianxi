/*用while循环语句求n!。
解：可以定义两个变量f和i，f用于存储阶乘的结果，其初始值为1，然后，让i依次取2、3、...、n，并把它乘以f。*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 2, f = 1;//循环初始化,当n为0，1时不进入循环，f=1
	while (i <= n)
	{
		f *= i;
		i++;
	}
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}