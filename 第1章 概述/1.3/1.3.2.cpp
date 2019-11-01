//This is simple C++ program
#include <iostream> //对C++标准库中定义的程序实体进行声明
using namespace std;
int main() //主函数
{
	double x, y;//定义两个局部变量x和y
	cout << "Enter two numbers:";//通过标准库中定义的对象cout往显示器输出提示信息
	cin >> x >> y;//通过标准库中定义的对象cin从键盘输入数据给变量x和y
	double z; //定义一个局部变量z
	z = x + y;//把x和y的值相加，结果保存到变量z中
	cout << x << "+" << y << "=" << z << endl;//输出计算结果
	return 0;//主函数返回，程序结束
}