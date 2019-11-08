/*编写一个函数str_to_int,把一个由数字构成的字符串转换成一个整型数。*/

#include <iostream>
using namespace std;

int str_to_int(char str[])
{
	int n = 0;//用于存储转换结果，初始化为0
	for (int i = 0; str[i] != '\0'; i++)//循环处理每一个数字
		n = n * 10 + (str[i] - '\0');//对最高位而言，空做一次惩罚（乘以0）
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