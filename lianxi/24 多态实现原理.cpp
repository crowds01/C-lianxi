/*��̬ʵ��ԭ���麯����*/

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
	pa->Func();//���B::Func
	//64λ����ָ��Ϊ8�ֽ�
	long long* p1 = (long long*)&a;//������麯����ָ���ڶ���ʼ��λ�ã���������ת���õ��麯������a���麯����ָ��
	long long* p2 = (long long*)pa;//�õ�B���麯����ָ��
	*p2 = *p1;//��A���麯��ָ���p2������B���麯����ָ��
	pa->Func();//���B::Func
	return 0;
}