/*��дһ����x^n�ĺ��������У�xΪdouble���ͣ�nΪ�������͡�
�⣺C++���Ա���û���ṩһ�������ܹ����x^n�ļ��㣬��ʱ�������ڳ����ж���һ��������ʵ�֡���ʵ���ϣ���C++��׼�����ṩ����Ӧ�ĺ�����*/

#include <iostream>
using namespace std;

double power(double x, int n);

int main()
{
	double x;
	int n;
	cout << "������x��n�Ĵ�С��";
	cin >> x >> n;
	cout << "x��n���ݵ�ֵΪ��" << power(x, n) << endl;
	return 0;
}

double power(double x, int n)
{
	if (x == 0) return 0;
	double product = 1.0;
	if (n >= 0)
		while (n > 0)
		{
			product *= x;
			n--;
		}
	else
		while (n < 0)
		{
			product /= x;
			n++;
		}
	return product;
}