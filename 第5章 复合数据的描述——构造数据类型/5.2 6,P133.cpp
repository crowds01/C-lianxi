/*�Ӽ�������һ���ַ�����Ȼ��Ѹ��ַ������������
�⣺�ɰ�������ַ���������ΪN������һ���ַ������У�Ȼ�󽻻�0��N-1��1��N-2��...��N/2-1��N/2+1λ���ϵ��ַ����������ַ������е��ַ�����*/

#include <iostream>
using namespace std;

int main()
{
	const int MAX_LEN = 100;
	char str[MAX_LEN];//���ڴ洢�ַ���
	int len;//���ڴ洢�ַ����ĳ���
	cin >> str;//�Ӽ�������һ���ַ���
	for (len = 0; str[len] != '\0'; len++);//�����ַ����ĳ���
	for (int i = 0, j = len - 1; i < j; i++, j--)//i��j�ֱ���ַ�����ͷ��β���м�λ���ƶ�
	{
		//����str[i]��str[j]�е��ַ�
		char temp;
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	cout << str << endl;
	return 0;
}