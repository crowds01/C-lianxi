/*��������
	��������Ļ���˼���ǣ����Ȳ���ĳ�ֲ��ԣ�������Ԫ�ؼӹ���A��B��C���������֡�
	���У�B��ֻ��һ��Ԫ�أ���Ϊpivot����A�е�����Ԫ�ض���pivotС��C�е�����Ԫ�ض����ڻ����pivot��
	Ȼ���A��C�������ֵ�Ԫ���ٷֱ����ͬ���Ĳ��Խ��л��֣�һֱ�����в�����ֻʣ��һ��Ԫ��Ϊֹ�����ִ����������ˡ��ֶ���֮���ĳ������˼�룬
	���ʺ����ڵݹ鷽����ʵ�֡�*/

#include <iostream>
using namespace std;

void quick_sort(int x[], int first, int last);
int split(int x[], int first, int last);

int  main()
{

}

void quick_sort(int x[], int first, int last)
{
	if (first < last)
	{
		int split_point;
		split_point = split(x, first, last);//��������мӹ�����Ϊ�����������±�first��split_point-1����pivotС��split_point+1��last����pivot������
		quick_sort(x, first, split_point - 1);
		quick_sort(x, split_point + 1, last);
	}
}

int split(int x[], int first, int last)
{
	int split_point, pivot;
	pivot = x[first];//ȡ��һ��Ԫ��Ϊpivot
	split_point = first;
	for (int unknown=first+1;unknown<=last;unknown++)
		if (x[unknown] < pivot)
		{
			split_point++;
			//����x[split_point]��x[unknown]��ֵ
			int t = x[split_point];
			x[split_point] = x[unknown];
			x[unknown] = t;
		}
	//����x[first]��x[split_point]��ֵ
	x[first] = x[split_point];
	x[split_point] = pivot;
	return split_point;
}