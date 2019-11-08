/*用函数实现求小于n的所有素数。*/

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n);//该函数判断n是否为素数
void print_prime(int n, int count);//该函数输出素数n，count是已输出的素数的个数
//上面给出的是is_prime和print_prime两个函数的声明，先不考虑它们的实现细节
int main()
{
	int n, count = 1;//count用于对找到的素数进行计数
	cout << "请输入一个正整数：";
	cin >> n;//从键盘输入一个正整数
	if (n < 2) return -1;
	cout << 2 << ",";
	for (int i = 3; i < n; i += 2)
	{
		if (is_prime(i))//调用函数is_prime来判断i是否为素数
		{
			count++;//把找到的素数个数加1
			print_prime(i, count);//调用函数print_prime输出素数i
		}
	}
	cout << endl;
	return 0;
}

bool is_prime(int n)//判断n是否为素数
{
	int i, j;
	for (i = 2, j = sqrt((double)n); i <= j; i++)
		if (n % i == 0) return false;
	return true;
}

void print_prime(int n, int count)//输出素数n，并保证一行只输出6个素数
{
	cout << n << ",";
	if (count % 6 == 0) cout << endl;
}