/*������ʵ�����Լɪ��Josephus�����⡣*/

#include <iostream>
using namespace std;

const int N = 20, M = 5;

int main()
{
	bool in_circle[N];
	int num_of_children_remained, index;
	//��ʼ������in_circle
	for (index = 0; index < N; index++)
		in_circle[index] = true;

	//��ʼ����
	index = N - 1;
	num_of_children_remained = N;//����ǰ��Ȧ����С������
	while (num_of_children_remained > 1)
	{
		int count = 0;
		while (count < M)//�Գɹ��ı������м���
		{
			index = (index + 1) % N;//����Ҫ������С���ı��
			if (in_circle[index])count++;
			//������Ϊindex��С����Ȧ���У��ñ���Ϊ�ɹ��ı���
		}
		in_circle[index] = false;//С���뿪Ȧ��
		num_of_children_remained--;//Ȧ��С������1
	}

	//�ҵ����һ��С��
	for (index = 0; index < N; index++)
		if (in_circle[index])break;

	cout << "The winner is No." << index << ".\n";
	return 0;
}