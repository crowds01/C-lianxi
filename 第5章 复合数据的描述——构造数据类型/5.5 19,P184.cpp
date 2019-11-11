/*编写一个程序，计算一个矩阵中各行的最大元素。
解：首先编写一个计算某一行最大元素的函数max，然后逐行调用max计算每行的最大元素。*/

#include <iostream>
using namespace std;

#define M 20
#define N 10

int max(int x[], int n)//计算某一行的最大元素
{
	int* p_max = x;//p_max指向最大元素，先假设第一个元素最大
	int* p = x + 1,//p指向第二个元素
		* p_last = x + n - 1;//p_last指向最后一个元素
	for (; p <= p_last; p++)//从第二个元素开始找最大元素
		if (*p > * p_max)p_max = p;
	return *p_max;
}

int main()
{
	int a[M][N];
	cout << "请输入200个数：";
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			cin >> a[i][j];
	int(*p)[N] = a,//p作为数组的行指针，初始化为指向第一行，用于对数组进行遍历
		(*p_last_line)[N] = a + M - 1;//p_last_line也为数组的行指针，它指向最后一行
	for (; p <= p_last_line; p++)
		cout << max(*p, N) << endl;
	return 0;
}