/*����������*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n = 141;
	//1) �ֱ���ʮ�����ơ�ʮ���ơ��˽����Ⱥ����n
	cout << "1) " << hex << n << " " << dec << n << " " << oct << n << endl;
	double x = 1234567.89, y = 12.34567;
	//2) ����5λ��Ч����
	cout << "2) " << setprecision(5) << x << " " << y << " " << endl;
	//3) ����С�������5λ
	cout << "3) " << fixed << setprecision(5) << x << " " << y << " " << endl;
	//4) ��ѧ������������ұ���С�������5λ
	cout << "4) " << scientific << setprecision(5) << x << " " << y << endl;
	//5) �Ǹ���Ҫ��ʾ���ţ�������Ϊ12�ַ�����Ȳ�������'*'�
	cout << "5) " << showpos << fixed << setw(12) << setfill('*') << 12.1 << endl;
	//6) �Ǹ�������ʾ���ţ�������Ϊ12�ַ�����Ȳ������ұ�������ַ����
	cout << "6) " << noshowpos << setw(12) << left << 12.1 << endl;
	//7) ������Ϊ12�ַ�����Ȳ��������������ַ����
	cout << "7) " << setw(12) << right << 12.1 << endl;
	//8) ��Ȳ���ʱ�����ź���ֵ�������ң��м�������ַ����
	cout << "8) " << setw(12) << internal << -12.1 << endl;
	//9) C++Ĭ��С�����5���ַ�
	cout << "9) " << 12.1 << endl;
	return 0;
}