/*��д��n!�ĵݹ麯����*/

#include <iostream>
using namespace std;

int f(int n);

int main()
{
	int n;
	cout << "������n��ֵ��";
	cin >> n;
	cout << n << "�Ľ׳�Ϊ��" << f(n) << endl;
	return 0;
}

int f(int n)
{
	if (n == 0)
		return 1;
	else
		return n * f(n - 1);
}