/*用链表实现对从键盘输入的数（个数不限）进行排序。
解：用链表来解决“对输入的若干个数进行排序，在输入时，先将输入各个数，最后输入一个结束标记（如：-1）”的问题。
可把该问题分解成4个子问题：输入各个数，建立链表；链表排序；输出链表各个结点的值以及撤销链表。*/

#include <iostream>
using namespace std;

struct Node
{
	int content;//代表结点的数据
	Node* next;//代表后一个结点的地址
};

extern Node* input();//输入数据，建立链表
extern void sort(Node* h);//排序
extern void output(Node* h);//输出数据
extern void remove(Node* h);//删除链表

int main()
{

}

Node* input()//从表尾插入数据
{
	Node* head = NULL, *tail;
	int x;
	cin >> x;
	while (x != 1)
	{
		Node* p = new Node;//生成新结点
		p->content = x;
		p->next = NULL;
		if (head == NULL)//为空表（加入第一个结点）
		{
			head = tail = p;//表头指针指向
		}
		else//不为空表
		{
			tail->next = p;//新结点加在表尾
			tail = p;//表尾指向新结点
		}
		cin >> x;//输入下一个数
	}
	return head;
}

void sort(Node* h)//采用选择排序，小的数往前放
{
	if (h == NULL || h->next == NULL)//链表中没有或只有一个结点
		return;
	//链表的头开始逐步缩小链表的范围
	for (Node* p1 = h; p1->next != NULL; p1 = p1->next)
	{
		Node* p_min = p1;//p_min指向最小的结点，初始化为p1
		//从p1的下一个开始与p_min进行比较
		for (Node* p2 = p1->next; p2 != NULL; p2 = p2->next)
			if (p2->content < p_min->content)
				p_min = p2;//保持p_min指向值最小的结点
		if (p_min != p1)//交换p_min与p1指向的结点的值，使得p1指向的结点值最小
		{
			int temp = p1->content;
			p1->content = p_min->content;
			p_min->content = temp;
		}
	}
}

void output(Node* h)
{
	for (Node* p = h; p != NULL; p = p->next)
		cout << p->content << ',';
	cout << endl;
}

void remove(Node* h)
{
	while (h != NULL)
	{
		Node* p = h;
		h = h->next;
		delete p;
	}
}

//上面的函数input也可以实现为从表头插入数据，这样操作更方便
//Node* input()//从表头插入数据
//{
//	Node* head = NULL;
//	int x;
//	cin >> x;
//	while (x != -1)
//	{
//		Node* p = new Node;//生成新结点
//		p->content = x;
//		p->next = head;//新结点插入表头
//		head = p;//把新结点设置为表头结点
//		cin >> x;
//	}
//	return head;
//}//这样不用一个一个查找到表尾