/*��д�����n��쳲��������ĵݹ麯����*/

#include <iostream>
using namespace std;

int fib(int n);

int main()
{
	int n = 0;
	cout << "������n��ֵ��";
	cin >> n;
	cout << "��" << n << "��쳲���������" << fib(n);
	return 0;
}

int fib(int n)
{
	if (n == 1 || n == 2)//�ݹ����������
		return 1;
	else//�ݹ��һ������
		return fib(n - 2) + fib(n - 1);
}