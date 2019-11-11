/*用指针来实现例6的字符串逆序功能
解：采用两个指针，一个指向字符串的头，另一个指向字符串的尾，然后让这两个指针相向逐步往中间移动，移动的同时交换它们所指向的字符。*/

#include <iostream>
#include <cstring>
using namespace std;

void reverse(char* str)
{
	char* p1 = str,//指向字符串的头
		* p2 = str + strlen(str) - 1;//指向字符串的尾
	for (; p1 < p2; p1++, p2--)//p1和p2分别从字符串的头和尾往中间位置移动
	{
		//交换*p1和*p2的值
		char temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}