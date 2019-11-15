/*多态实现原理：虚函数表*/

#include <iostream>
using namespace std;

class A
{
public:
	virtual void Func() { cout << "A::Func" << endl; }
};
class B :public A
{
public:
	virtual void Func() { cout << "B::Func" << endl; }
};

int main()
{
	A a;
	A* pa = new B();
	pa->Func();//输出B::Func
	//64位程序指针为8字节
	long long* p1 = (long long*)&a;//对象的虚函数表指针在对象开始的位置，进行类型转换得到虚函数表中a的虚函数的指针
	long long* p2 = (long long*)pa;//得到B中虚函数的指针
	*p2 = *p1;//把A的虚函数指针给p2，覆盖B中虚函数的指针
	pa->Func();//输出B::Func
	return 0;
}