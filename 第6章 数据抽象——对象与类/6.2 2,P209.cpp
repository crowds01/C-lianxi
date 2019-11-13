/*������ʵ��ջ��Stack*/

#include <iostream>
using namespace std;

class Stack
{
public:
	Stack() { top = NULL; }//���캯��һ������ĳ�Ա����
	void push(int i);
	void pop(int& i);
private:
	struct Node
	{
		int content;
		Node* next;
	}*top;
};

void Stack::push(int i)
{
	Node* p = new Node;
	if (p == NULL)//���벻���ռ�ʱ����NULL
	{
		cout << "Stack is overflow.\n";
		exit(-1);
	}
	else
	{
		p->content = i;
		p->next = top;
		top = p;
		return;
	}
}

void Stack::pop(int& i)
{
	if (top == NULL)
	{
		cout << "Stack is empty.\n";
		exit(-1);
	}
	else
	{
		Node* p = top;
		top = top->next;
		i = p->content;
		delete p;
		return;
	}
}