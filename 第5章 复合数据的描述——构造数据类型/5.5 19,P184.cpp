/*��дһ�����򣬼���һ�������и��е����Ԫ�ء�
�⣺���ȱ�дһ������ĳһ�����Ԫ�صĺ���max��Ȼ�����е���max����ÿ�е����Ԫ�ء�*/

#include <iostream>
using namespace std;

#define M 20
#define N 10

int max(int x[], int n)//����ĳһ�е����Ԫ��
{
	int* p_max = x;//p_maxָ�����Ԫ�أ��ȼ����һ��Ԫ�����
	int* p = x + 1,//pָ��ڶ���Ԫ��
		* p_last = x + n - 1;//p_lastָ�����һ��Ԫ��
	for (; p <= p_last; p++)//�ӵڶ���Ԫ�ؿ�ʼ�����Ԫ��
		if (*p > * p_max)p_max = p;
	return *p_max;
}

int main()
{
	int a[M][N];
	cout << "������200������";
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			cin >> a[i][j];
	int(*p)[N] = a,//p��Ϊ�������ָ�룬��ʼ��Ϊָ���һ�У����ڶ�������б���
		(*p_last_line)[N] = a + M - 1;//p_last_lineҲΪ�������ָ�룬��ָ�����һ��
	for (; p <= p_last_line; p++)
		cout << max(*p, N) << endl;
	return 0;
}