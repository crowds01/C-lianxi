/*��̬�ı�����ʽһ*/

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
	p->SomeVirtualFunction();//�����ĸ��麯��ȡ����pָ���������͵Ķ���
	return 0;
}