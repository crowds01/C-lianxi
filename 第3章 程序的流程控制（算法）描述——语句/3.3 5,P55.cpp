/*�Ӽ�������һ�������ε������ߣ��ж���Ϊ���������Ρ�
�⣺������Ƕ�׵�if��������ĳ���*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "�����������������ߵĳ��ȣ�";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "����������";
	else if (a == b && a == c)
		cout << "�ȱ�������";
	else if (a == b || a == c || b == c)
		cout << "����������";
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		cout << "ֱ�������Σ��ǵ�����";
	else
		cout << "����������";
	cout << endl;
	return 0;
}