/*��дһ������str_to_int,��һ�������ֹ��ɵ��ַ���ת����һ����������*/

#include <iostream>
using namespace std;

int str_to_int(char str[])
{
	int n = 0;//���ڴ洢ת���������ʼ��Ϊ0
	for (int i = 0; str[i] != '\0'; i++)//ѭ������ÿһ������
		n = n * 10 + (str[i] - '\0');//�����λ���ԣ�����һ�γͷ�������0��
	return n;
}

int mian()
{
	const int LENGTH = 10;
	char str[LENGTH];
	for (int i = 0; i < LENGTH; i++)
		if (i < 9)
			cin >> str[8 - i];
		else
			str[9] = '\0';
	cout << str_to_int(str);
	return 0;
}