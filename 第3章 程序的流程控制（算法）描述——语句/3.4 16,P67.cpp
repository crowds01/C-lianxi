/*�жϼ��������һ�������Ƿ�Ϊ������
�⣺Ҫ�ж�һ����n�Ƿ�Ϊ������ͨ���������ǣ���2��3��...��n-1ȥ��n�����������һ����������n����n��������������nΪ������*/

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
		cout << n << "��������" << endl;
	else
		cout << n << "����������" << endl;
	return 0;
}