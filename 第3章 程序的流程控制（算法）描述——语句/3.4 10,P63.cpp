/*��whileѭ�������n!��
�⣺���Զ�����������f��i��f���ڴ洢�׳˵Ľ�������ʼֵΪ1��Ȼ����i����ȡ2��3��...��n������������f��*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 2, f = 1;//ѭ����ʼ��,��nΪ0��1ʱ������ѭ����f=1
	while (i <= n)
	{
		f *= i;
		i++;
	}
	cout << "factorial of " << n << " = " << f << endl;
	return 0;
}