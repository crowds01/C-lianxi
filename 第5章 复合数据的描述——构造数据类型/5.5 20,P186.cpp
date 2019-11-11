/*编写一个程序，根据输入的要求执行在一个函数表中定义的某个函数。*/

#include <iostream>
#include <cmath>
using namespace std;

const int MAX_LEN = 8;
typedef double (*FP)(double);
FP func_list[MAX_LEN] = { sin,cos,tan,asin,acos,atan,log,log10 };//指针函数数组，初始化的是cmath中的函数名,函数可以不用&

int main()
{
	int index;
	double x;
	do
	{
		cout << "请输入要计算的函数（0:sin 1:cos 2:tan 3:asin\n"
			<< "4:acos 5:atan 6:log 7:log10）:";
		cin >> index;//输入函数表的下标
	} while (index < 0 || index >7);
	cout << "请输入参数：";
	cin >> x;
	cout << "结果为："
		<< func_list[index](x)//调用func_list[index]指向的函数
		<< endl;
	return 0;
}