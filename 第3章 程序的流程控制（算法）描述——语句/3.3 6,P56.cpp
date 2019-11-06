/*从键盘输入两个表示时刻的时间数据（每个时刻包括时、分、秒），比较这两个时刻的先后次序。
解：对于该问题，我们分别用三个整型变量（h1，m1，s1和h2,m2,s2）表示两个时刻的时、分、秒的值，用另外一个整型变量（r）表示它们的先后次序。*/

#include <iostream>
using namespace std;

int main()
{
	int h1, m1, s1,
		h2, m2, s2,
		r;//1第一个时刻在前，0两个时刻相同，-1第二个时刻在前
	cout << "请输入第一个时刻（时、分、秒）：";
	cin >> h1 >> m1 >> s1;
	cout << "请输入第二个时刻（时、分、秒）：";
	cin >> h2 >> m2 >> s2;
	if (h2 > h1)
	{
		r = 1;
	}
	else if (h2 < h1)
		r = -1;
	else if (m2 > m1)//从此，h1=h2
		r = 1;
	else if (m2 < m1)
		r = -1;
	else if (s2 > s1)
		r = 1;
	else if (s2 < s1)
		r = -1;
	else
		r = 0;
	if (r == 1)
		cout << "第一个时刻在前。";
	else if (r == -1)
		cout << "第二个时刻在前。";
	else
		cout << "两个时刻相同。";
	cout << endl;
	return 0;
}