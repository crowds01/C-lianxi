/*��forѭ�������n����
�⣺���������úͳ�ʼ������while���ʵ����ͬ��*/

#include <iostream>
using namespace std;

int main()
{
	int n, i, f;
	cin >> n;
	for (i = 2, f = 1; i <= n; i++)
		f *= i;
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}