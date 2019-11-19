/*bad_cast
用dynamic_cat转换时，如果不安全，则会抛出此异常*/

#include <iostream>
#include <stdexcept>
#include <typeinfo>
using namespace std;

class Base
{
	virtual void func() { }
};
class Derived :public Base
{
public:
	void Print() { }
};

void PrintObj(Base& b)
{
	try {
		Derived& rd = dynamic_cast<Derived&>(b);
		//此转换若不安全，会抛出bad_cast异常
	}
	catch (bad_cast & e)
	{
		cerr << e.what() << endl;
	}
}

int main()
{
	Base b;
	PrintObj(b);
	return 0;
}