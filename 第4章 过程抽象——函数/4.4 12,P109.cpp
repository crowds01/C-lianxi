/*�õݹ麯��ʵ�������������������Լ����
�⣺շת�����*/

#include <iostream>
using namespace std;

int gcd(int x, int y);

int main()
{
	int x, y;
	cout << "������x��y��ֵ��";
	cin >> x >> y;
	cout << x << "��" << y << "�����Լ���ǣ�" << gcd(x, y);
	return 0;
}

int gcd(int x, int y)
{
	return (y == 0) ? x : gcd(y, x % y);
}