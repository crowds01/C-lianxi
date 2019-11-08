/*�⺺ŵ��Hanni�������⡣*/

#include <iostream>
using namespace std;

void hanoi(char x, char y, char z, int n)//��n��Բ�̴�x��ʾ����������y����ʾ������
{
	if (n == 1)
		cout << "1:" << x << "��" << y << endl;
	else
	{
		hanoi(x, z, y, n - 1);//��n-1��Բ�̴�x��ʾ����������z����ʾ������
		cout << n << ":" << x << "��" << y << endl;//�ѵ�n��Բ�̴�x��ʾ�������Ƶ�y����ʾ������
		hanoi(z, y, x, n - 1);//��n-1��Բ�̴�z��ʾ����������y����ʾ������
	}
}

int main()
{
	hanoi('A', 'B', 'C', 8);
	return 0;
}