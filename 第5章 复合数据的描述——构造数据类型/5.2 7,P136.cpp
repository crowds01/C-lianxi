/*�Ӽ�������һ��N��N�ľ��󣬰���ת�ú������
�⣺�������һ����ά��������ʾ���Ծ������ת�þ��ǽ�����ά������a[i][j]��a[j][i]��ֵ��*/

#include <iostream>
using namespace std;

int main()
{
	const int N = 3;
	int a[N][N];
	int i, j;
	//�����������
	cout << "������" << N << "��" << N << "����\n";
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			cin >> a[i][j];
	//ת�þ��󣺽���a[i][j]��a[j][i]��ֵ
	for (i=0;i<N;i++)
		for (j = i + 1; j < N; j++)
		{
			//����a[i][j]��a[j][i]��ֵ
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	//���ת�ú�ľ���
	cout << "ת�ú�Ϊ��\n";
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}