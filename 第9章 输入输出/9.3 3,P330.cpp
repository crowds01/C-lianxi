/*从例9-1输出的文件中读入数据，计算每个学生的平均成绩并输出到显示器。
解：例9-1程序输出的文件是以文本方式组织的，因此，读入该文件时也要以文本方式进行。*/

#include <cstdio>
using namespace std;

int main()
{
	FILE* fp = fopen("e:\\scores.txt", "r");//以文本方式打开文件用于输入
	if (fp == NULL)
	{
		printf("打开文件失败！\n");
		return -1;
	}
	char id[11], name[9];
	int num_of_courses, score, total;
	fscanf(fp, "%10s", id);//读入第一个学生的学号
	while (!feof(fp))//判断文件结束标记
	{
		fscanf(fp, "%8s", name);//读入姓名
		fscanf(fp, "%d", &num_of_courses);//读入选课数
		total = 0;
		for (int i = 0; i < num_of_courses; i++)//循环读入各门课成绩并加到total上
		{
			fscanf(fp, "%d", &score);
			total += score;
		}
		printf("%s,%s,%d\n", id, name, total / num_of_courses);//输出结果
		fscanf(fp, "%10s", id);//读入下一个学生的学号
	}
	fclose(fp);//关闭文件
	return 0;
}