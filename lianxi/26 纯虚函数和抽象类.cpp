/*纯虚函数和抽象类*/

#include <iostream>
using namespace std;

class A
{
public:
	virtual void f() = 0;//纯虚函数
	void g() { this->f(); }//OK
	A() { //f(); //错误，没有函数体 
	}
};
class B :public A
{
public:
	void f() { cout << "B::f" << endl; }
};

int main()
{
	B b;
	b.g();//这样方便派生类重新定义
	return 0;
}