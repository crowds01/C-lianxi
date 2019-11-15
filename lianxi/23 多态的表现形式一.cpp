/*多态的表现形式一*/

#include <iostream>
using namespace std;

class CBase
{
public:
	virtual void SomeVirtualFunction() { }
};
class CDerived :public CBase
{
public:
	virtual void SomeVitrualFunction() { }
};
int main()
{
	CDerived ODerived;
	CBase* p = &ODerived;
	p->SomeVirtualFunction();//调用哪个虚函数取决于p指向哪种类型的对象
	return 0;
}