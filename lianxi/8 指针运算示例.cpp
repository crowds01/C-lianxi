/*指针运算示例*/

#include <iostream>
using namespace std;

int main()
{
	int* p1, * p2;
	int n = 4;
	char* pc1, * pc2;
	p1 = (int*)100;
	p2 = (int*)200;
	cout << "1)" << p2 - p1 << endl;
	//输出1）25，因（200-100）/sizeof(int)=100/4=25
	pc1 = (char*)p1;
	pc2 = (char*)p2;
	cout << "2)" << pc1 - pc2 << endl;
	//输出2）-100，因为（100-200）/sizeof(char)=-100
	cout << "3)" << (p2 + n) - p1 << endl;//输出3）29
	int* p3 = p2 + n;//p2+n是一个指针，可以用它给p3赋值
	cout << "4)" << p3 - p1 << endl;//输出4）29
	cout << "5)" << (pc2 - 10) - pc1 << endl;//输出5）90
	return 0;
}

//实际可能运行不了，因为200，100转换后的地址可能是不可读写的区域，会报错