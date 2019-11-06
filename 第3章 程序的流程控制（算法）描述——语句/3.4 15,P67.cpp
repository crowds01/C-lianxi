/*从键盘接收字符，一直到输入字符y(Y)或n(N)为止。
解：这个问题是重复从键盘读入字符数据，直到读入有效字符数据为止。该循环可用do-while语句来实现。*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	do
	{
		cout << "请输入Yes或No（y/n）：";
		cin >> ch;
		ch = tolower(ch);//tolower是C++标准库中定义的函数，其作用是把大写字母转换成小写字母
	} while (ch != 'y' && ch != 'n');
	if (ch == 'y')
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	return 0;
}