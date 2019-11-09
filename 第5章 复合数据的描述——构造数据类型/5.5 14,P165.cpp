/*编写一个计算一元二次方程实根的函数。
解：由于该函数需要把计算实根的情况（是否有实根、是否是等实根等信息）
以及两个实根返回给调用者，而函数的返回值机制只能返回一个值，因此就
需要通过其他机制来实现函数返回两个及两个以上的值，这里可以采用指针
类型的参数来解决。*/

#include <iostream>
#include <cmath>
using namespace std;

int calculate_roots(double a, double b, double c, double* root1, double* root2)
{
	if (a == 0)//系数a是0，因此不是一个一元二次方程
		return -1;
	double t = b * b - 4 * a * c;
	if (t < 0)//b2-4ac<0，方程没有根
		return 0;
	if (t == 0)//方程有等根
	{
		*root1 = *root2 = -b / (2 * a);
		return 1;
	}
	else
	{
		t = sqrt(t);
		*root1 = (-b + t) / (2 * a);
		*root2 = (-b - t) / (2 * a);
		return 2;
	}
}

int main()
{
	double a1, b1, c1, rt1, rt2;
	cout << "请输入一元二次方程的系数（a,b,c）:" << endl;
	cin >> a1 >> b1 >> c1;
	switch (calculate_roots(a1, b1, c1, &rt1, &rt2))
	{
	case -1:
		cout << "不是一元二次方程\n";
		break;
	case 0:
		cout << "方程没有实根\n";
		break;
	case 1:
		cout << "方程有两个等根：" << rt1 << endl;
		break;
	case 2:
		cout << "方程有两个不等根：" << rt1 << "和" << rt2 << endl;
	}
	return 0;
}