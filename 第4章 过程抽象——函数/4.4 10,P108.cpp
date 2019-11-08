/*��x^n�ĵݹ麯����
�⣺x^n�ɶ���ɣ�
		x*x^n-1 (n>0)
		1 (n=0)
		1/x^-n (n<0)
��x^n�ɻ������x^n-1������*/

#include <iostream>
using namespace std;

double power(double x, int n);

int main()
{
	double x;
	int n;
	cout << "������x��n��ֵ��";
	cin >> x >> n;
	cout << power(x, n);
	return 0;
}

double power(double x, int n)
{
	if (x == 0)
	{
		if (n == 0)
			return -1;
		else
			return 0;
	}
	if (n == 0)
		return 1;
	else if (n > 0)
		return x * power(x, n - 1);
	else
		return power(x, -n);
}