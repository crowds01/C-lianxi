/*��ţ�ٵ�������a^1/3
�⣺������ʽΪ��xn+1=1/3(2xn+a/xn^2)����|xn+1-xn|<�ţ�һ����С������ʱ��xn+1��Ϊa^1/3��ֵ*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double EPS = 1e-6;
	double a, x1, x2;
	cout << "������һ������";
	cin >> a;
	x2 = a;
	do
	{
		x1 = x2;
		x2 = (2 * x1 + a / (x1 * x1)) / 3;
	} while (fabs(x2 - x1) >= EPS);
	cout << a << "���������ǣ�" << x2 << endl;
	return 0;
}