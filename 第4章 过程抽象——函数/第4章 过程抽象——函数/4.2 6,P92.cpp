/*�ú���ʵ����С��n������������*/

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n);//�ú����ж�n�Ƿ�Ϊ����
void print_prime(int n, int count);//�ú����������n��count��������������ĸ���
//�����������is_prime��print_prime�����������������Ȳ��������ǵ�ʵ��ϸ��
int main()
{
	int n, count = 1;//count���ڶ��ҵ����������м���
	cout << "������һ����������";
	cin >> n;//�Ӽ�������һ��������
	if (n < 2) return -1;
	cout << 2 << ",";
	for (int i = 3; i < n; i += 2)
	{
		if (is_prime(i))//���ú���is_prime���ж�i�Ƿ�Ϊ����
		{
			count++;//���ҵ�������������1
			print_prime(i, count);//���ú���print_prime�������i
		}
	}
	cout << endl;
	return 0;
}

bool is_prime(int n)//�ж�n�Ƿ�Ϊ����
{
	int i, j;
	for (i = 2, j = sqrt((double)n); i <= j; i++)
		if (n % i == 0) return false;
	return true;
}

void print_prime(int n, int count)//�������n������֤һ��ֻ���6������
{
	cout << n << ",";
	if (count % 6 == 0) cout << endl;
}