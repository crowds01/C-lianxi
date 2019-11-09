/*从键盘输入一个字符串，然后把该字符串逆向输出。
解：可把输入的字符串（长度为N）放在一个字符数组中，然后交换0和N-1、1和N-2，...，N/2-1和N/2+1位置上的字符，最后，输出字符数组中的字符串。*/

#include <iostream>
using namespace std;

int main()
{
	const int MAX_LEN = 100;
	char str[MAX_LEN];//用于存储字符串
	int len;//用于存储字符串的长度
	cin >> str;//从键盘输入一个字符串
	for (len = 0; str[len] != '\0'; len++);//计算字符串的长度
	for (int i = 0, j = len - 1; i < j; i++, j--)//i和j分别从字符串的头和尾往中间位置移动
	{
		//交换str[i]和str[j]中的字符
		char temp;
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	cout << str << endl;
	return 0;
}