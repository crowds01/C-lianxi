/*����3-2�����㼶��a+2a+3a+...��ǰn��ĺ͡�
�⣺����ļ���ǰn��Ϳ��õȲ�������͹�ʽ��*/

#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	double a = 0, sum = 0;
	cout << "a=";
	cin >> a;
	cout << "n=";
	cin >> n;
	sum = a * (1 + n) * n / 2;
	cout << "sum=" << sum << endl;
	return 0;
}