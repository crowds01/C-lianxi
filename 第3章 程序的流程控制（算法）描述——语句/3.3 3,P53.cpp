/*�Ӽ������������������������е�����߲����֮��
�⣺�ȴ����������ҳ�һ���ϴ�ģ��ڰ�������������Ƚϣ��ϴ��߼�Ϊ�����е������*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, max;
	cout << "����������������" << endl;
	cin >> a >> b >> c;
	if (a > b)
		max = a;
	else
		max = b;
	if (c > max)
		max = c;
	cout << "�����Ϊ��" << max << endl;
	return 0;
}

//Ҳ����������������?:��