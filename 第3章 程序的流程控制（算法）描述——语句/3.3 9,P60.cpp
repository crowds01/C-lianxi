/*����ĳ��ĳ�µ�������
�⣺����������1��3��5��7��8��10��12������31�죻4��6��9��11������30�죻2�°�����Ϊ29�죬����Ϊ28�졣
������б������������4�ı���������100�ı�����������400�ı�������*/

#include <iostream>
using namespace std;

int main()
{
	int year, month, days;
	cout << "�������꣺";
	cin >> year;
	cout << "�������£�";
	cin >> month;
	switch (month)
	{
	case 1:case 3: case 5: case 7:case 8:case 10:case 12:
		days = 31;
		break;
	case 4:case 6:case 9:case 11:
		days = 30;
		break;
	case 2:
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			days = 29;
		else
			days = 28;
	}
	cout << year << "��" << month << "�µ������ǣ�" << days << endl;
	return 0;
}