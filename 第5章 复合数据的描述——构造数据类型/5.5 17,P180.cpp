/*������ʵ�����Լɪ������*/

#include <iostream>
using namespace std;

struct Node
{
	int no;//С���ı��
	Node* next;//ָ����һ��С����ָ��
};

int main()
{
	int m,//���ڴ洢Ҫ������
		n,//���ڴ洢С���ĸ���
		num_of_children_remained;//���ڴ洢Ȧ����ʣ�µ�С������
	cout << "������С���ĸ�����Ҫ��������";
	cin >> n >> m;
	//����Ȧ��
	Node* first, * last;//first��last���ڷֱ�ָ���һ�������һ��С��
	first = last = new Node;//���ɵ�һ�����
	first->no = 0;//��һ��С���ı��Ϊ0
	for (int i = 1; i < n; i++)//ѭ����������С�����
	{
		Node* p = new Node;//����һ��С�����
		p->no = i;//��С���Ľ��ı��Ϊi
		last->next = p;//ԭ�����һ��С����nextָ�������ɵ�С�����
		last = p;//�������ɵ�С�������Ϊ���һ�����
	}
	last->next = first;//�����һ��С������һ��С����Ϊ��һ��������һ����

	//��ʼ����
	num_of_children_remained = n;//����ǰ��Ȧ����С������
	Node* previous = last;//previousָ��ʼ������ǰһ��С��
	while (num_of_children_remained > 1)
	{
		for (int count = 1; count < m; count++)//ѭ��m-1��
			previous = previous->next;
		//ѭ������ʱ,previousָ��Ҫ�뿪Ȧ�ӵ�С����ǰһ��С��
		Node* p = previous->next;//pָ��Ҫ�뿪Ȧ�ӵ�С��
		previous->next = p->next;//С���뿪Ȧ��
		delete p;//�ͷ���ȦС�����Ŀռ�
		num_of_children_remained--;//Ȧ��С������1
	}
	//���ʤ���ߵı��
	cout << "The winner is No." << previous->no << "\n";
	delete previous;//�ͷ�ʤ���߽��Ŀռ�
	return 0;
}