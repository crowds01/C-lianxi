/*�Ӽ��̽����ַ���һֱ�������ַ�y(Y)��n(N)Ϊֹ��
�⣺����������ظ��Ӽ��̶����ַ����ݣ�ֱ��������Ч�ַ�����Ϊֹ����ѭ������do-while�����ʵ�֡�*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	do
	{
		cout << "������Yes��No��y/n����";
		cin >> ch;
		ch = tolower(ch);//tolower��C++��׼���ж���ĺ������������ǰѴ�д��ĸת����Сд��ĸ
	} while (ch != 'y' && ch != 'n');
	if (ch == 'y')
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	return 0;
}