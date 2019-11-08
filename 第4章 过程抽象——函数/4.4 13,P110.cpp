/*解汉诺（Hanni）塔问题。*/

#include <iostream>
using namespace std;

void hanoi(char x, char y, char z, int n)//把n个圆盘从x表示的柱子移至y所表示的柱子
{
	if (n == 1)
		cout << "1:" << x << "→" << y << endl;
	else
	{
		hanoi(x, z, y, n - 1);//把n-1个圆盘从x表示的柱子移至z所表示的柱子
		cout << n << ":" << x << "→" << y << endl;//把第n个圆盘从x表示的柱子移到y所表示的柱子
		hanoi(z, y, x, n - 1);//把n-1个圆盘从z表示的柱子移至y所表示的柱子
	}
}

int main()
{
	hanoi('A', 'B', 'C', 8);
	return 0;
}