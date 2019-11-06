/*从键盘输入一个三角形的三条边，判断其为何种三角形。
解：下面用嵌套的if语句来表达的程序。*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "请输入三角形三条边的长度：";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "不是三角形";
	else if (a == b && a == c)
		cout << "等边三角形";
	else if (a == b || a == c || b == c)
		cout << "等腰三角形";
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		cout << "直角三角形（非等腰）";
	else
		cout << "其他三角形";
	cout << endl;
	return 0;
}