/*�Ӽ�������һ�����ڵ�ĳһ�죨0�������죻1������һ��......��6������������Ȼ��������Ӧ��Ӣ�ﵥ�ʡ�
�⣺��if�����ʵ��*/

#include <iostream>
using namespace std;

int main()
{
	int day;
	cin >> day;
	if (day == 0)
		cout << "Sunday";
	else if (day == 1)
		cout << "Monday";
	else if (day == 2)
		cout << "Tuesday";
	else if (day == 3)
		cout << "Wednesday";
	else if (day == 4)
		cout << "Thursday";
	else if (day == 5)
		cout << "Friday";
	else if (day == 6)
		cout << "Saturday";
	else
		cout << "Input error";//��ֹ������Ч����
	cout << endl;
	return 0;
}

//��switch�����ʵ��
//int main()
//{
//	int day;
//	cin >> day;
//	switch (day)
//	{
//	case 0:cout << "Sunday"; break;
//	case 1:cout << "Monday"; break;
//	case 2:cout << "Tuesday"; break;
//	case 3:cout << "Wednesday"; break;
//	case 4:cout << "Thursday"; break;
//	case 5:cout << "Friday"; break;
//	case 6:cout << "Saturday"; break;
//	default:cout << "Input error";
//	}
//	cout << endl;
//	return 0;
//}