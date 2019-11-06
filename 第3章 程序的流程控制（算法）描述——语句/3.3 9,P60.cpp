/*计算某年某月的天数。
解：根据历法，1、3、5、7、8、10、12各月有31天；4、6、9、11各月有30天；2月按闰年为29天，其他为28天。
闰年的判别条件即年份是4的倍数但不是100的倍数（可以是400的倍数）。*/

#include <iostream>
using namespace std;

int main()
{
	int year, month, days;
	cout << "请输入年：";
	cin >> year;
	cout << "请输入月：";
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
	cout << year << "年" << month << "月的天数是：" << days << endl;
	return 0;
}