/*��дһ������һԪ���η���ʵ���ĺ�����
�⣺���ڸú�����Ҫ�Ѽ���ʵ����������Ƿ���ʵ�����Ƿ��ǵ�ʵ������Ϣ��
�Լ�����ʵ�����ظ������ߣ��������ķ���ֵ����ֻ�ܷ���һ��ֵ����˾�
��Ҫͨ������������ʵ�ֺ��������������������ϵ�ֵ��������Բ���ָ��
���͵Ĳ����������*/

#include <iostream>
#include <cmath>
using namespace std;

int calculate_roots(double a, double b, double c, double* root1, double* root2)
{
	if (a == 0)//ϵ��a��0����˲���һ��һԪ���η���
		return -1;
	double t = b * b - 4 * a * c;
	if (t < 0)//b2-4ac<0������û�и�
		return 0;
	if (t == 0)//�����еȸ�
	{
		*root1 = *root2 = -b / (2 * a);
		return 1;
	}
	else
	{
		t = sqrt(t);
		*root1 = (-b + t) / (2 * a);
		*root2 = (-b - t) / (2 * a);
		return 2;
	}
}

int main()
{
	double a1, b1, c1, rt1, rt2;
	cout << "������һԪ���η��̵�ϵ����a,b,c��:" << endl;
	cin >> a1 >> b1 >> c1;
	switch (calculate_roots(a1, b1, c1, &rt1, &rt2))
	{
	case -1:
		cout << "����һԪ���η���\n";
		break;
	case 0:
		cout << "����û��ʵ��\n";
		break;
	case 1:
		cout << "�����������ȸ���" << rt1 << endl;
		break;
	case 2:
		cout << "�������������ȸ���" << rt1 << "��" << rt2 << endl;
	}
	return 0;
}