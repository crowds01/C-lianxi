/*����9-1������ļ��ж������ݣ�����ÿ��ѧ����ƽ���ɼ����������ʾ����
�⣺��9-1����������ļ������ı���ʽ��֯�ģ���ˣ�������ļ�ʱҲҪ���ı���ʽ���С�*/

#include <cstdio>
using namespace std;

int main()
{
	FILE* fp = fopen("e:\\scores.txt", "r");//���ı���ʽ���ļ���������
	if (fp == NULL)
	{
		printf("���ļ�ʧ�ܣ�\n");
		return -1;
	}
	char id[11], name[9];
	int num_of_courses, score, total;
	fscanf(fp, "%10s", id);//�����һ��ѧ����ѧ��
	while (!feof(fp))//�ж��ļ��������
	{
		fscanf(fp, "%8s", name);//��������
		fscanf(fp, "%d", &num_of_courses);//����ѡ����
		total = 0;
		for (int i = 0; i < num_of_courses; i++)//ѭ��������ſγɼ����ӵ�total��
		{
			fscanf(fp, "%d", &score);
			total += score;
		}
		printf("%s,%s,%d\n", id, name, total / num_of_courses);//������
		fscanf(fp, "%10s", id);//������һ��ѧ����ѧ��
	}
	fclose(fp);//�ر��ļ�
	return 0;
}