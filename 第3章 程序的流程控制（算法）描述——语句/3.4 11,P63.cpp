/*��do-whileѭ�������n!��
�⣺������������ǰ����while���ʵ�ֵ���ͬ����֮ͬ������i��ȡֵ�Ǵ�1��ʼ�ġ�*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 1, f = 1;//ѭ����ʼ��
	do
	{
		f *= i;
		i++;
	} while (i <= n);
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}