/*������ʵ�ֶԴӼ�������������������ޣ���������
�⣺�����������������������ɸ�����������������ʱ���Ƚ�������������������һ��������ǣ��磺-1���������⡣
�ɰѸ�����ֽ��4�������⣺�����������������������������������������ֵ�Լ���������*/

#include <iostream>
using namespace std;

struct Node
{
	int content;//�����������
	Node* next;//�����һ�����ĵ�ַ
};

extern Node* input();//�������ݣ���������
extern void sort(Node* h);//����
extern void output(Node* h);//�������
extern void remove(Node* h);//ɾ������

int main()
{

}

Node* input()//�ӱ�β��������
{
	Node* head = NULL, *tail;
	int x;
	cin >> x;
	while (x != 1)
	{
		Node* p = new Node;//�����½��
		p->content = x;
		p->next = NULL;
		if (head == NULL)//Ϊ�ձ������һ����㣩
		{
			head = tail = p;//��ͷָ��ָ��
		}
		else//��Ϊ�ձ�
		{
			tail->next = p;//�½����ڱ�β
			tail = p;//��βָ���½��
		}
		cin >> x;//������һ����
	}
	return head;
}

void sort(Node* h)//����ѡ������С������ǰ��
{
	if (h == NULL || h->next == NULL)//������û�л�ֻ��һ�����
		return;
	//�����ͷ��ʼ����С����ķ�Χ
	for (Node* p1 = h; p1->next != NULL; p1 = p1->next)
	{
		Node* p_min = p1;//p_minָ����С�Ľ�㣬��ʼ��Ϊp1
		//��p1����һ����ʼ��p_min���бȽ�
		for (Node* p2 = p1->next; p2 != NULL; p2 = p2->next)
			if (p2->content < p_min->content)
				p_min = p2;//����p_minָ��ֵ��С�Ľ��
		if (p_min != p1)//����p_min��p1ָ��Ľ���ֵ��ʹ��p1ָ��Ľ��ֵ��С
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

//����ĺ���inputҲ����ʵ��Ϊ�ӱ�ͷ�������ݣ���������������
//Node* input()//�ӱ�ͷ��������
//{
//	Node* head = NULL;
//	int x;
//	cin >> x;
//	while (x != -1)
//	{
//		Node* p = new Node;//�����½��
//		p->content = x;
//		p->next = head;//�½������ͷ
//		head = p;//���½������Ϊ��ͷ���
//		cin >> x;
//	}
//	return head;
//}//��������һ��һ�����ҵ���β