/*static存储类使得某些局部变量的值能在函数多次调用之间得以保留。*/

#include <iostream>
using namespace std;

int z = 0;
void f();

int main()
{
	f();
	z++;
	f();
	return 0;
}

void f()
{
	int x = 0;
	static int y = 0;
	x++;
	y++;
	z++;
	cout << "x=" << x << ",y=" << y << ",z=" << z << endl;
}