/*【例3-1】编写一个程序，从键盘输入一个数，然后输出该数的平方、立方以及平方根。
解：该问题是一个简单的顺序执行过程，先输入一个数，然后分别计算它的平方、立方以及平方根，最后输出计算结果。*/

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	double x, square, cube, square_root;
	cout << "Please input a positive number:";
	cin >> x;
	square = x * x;
	cube = x * x * x;
	square_root = sqrt(x);
	cout << "The square of " << x << " is " << square << endl;
	cout << "The cube of " << x << " is " << cube << endl;
	cout << "The square root of " << x << " is " << square_root << endl;
	return 0;
}