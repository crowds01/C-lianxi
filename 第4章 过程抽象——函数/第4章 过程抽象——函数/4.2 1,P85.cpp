/*��дһ����n!�ĺ�����*/

#include <iostream>
using namespace std;

extern int factorial(int n);

int main()
{
	int n;
	cout << "������n��ֵ��";
	cin >> n;
	int f = factorial(n);
	cout << n << "�Ľ׳��ǣ�" << f << endl;
	return 0;
}

int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}