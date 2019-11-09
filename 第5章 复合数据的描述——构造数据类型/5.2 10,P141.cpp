/*快速排序：
	快速排序的基本思想是：首先采用某种策略，把数组元素加工成A、B、C下三个部分。
	其中，B中只有一个元素（称为pivot），A中的所有元素都比pivot小，C中的所有元素都大于或等于pivot。
	然后对A和C两个部分的元素再分别采用同样的策略进行划分，一直到所有部分中只剩下一个元素为止。这种处理技术体现了“分而治之”的程序设计思想，
	它适合用于递归方法来实现。*/

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
		split_point = split(x, first, last);//对数组进行加工，分为三部分其中下标first到split_point-1都比pivot小，split_point+1到last都比pivot大或等于
		quick_sort(x, first, split_point - 1);
		quick_sort(x, split_point + 1, last);
	}
}

int split(int x[], int first, int last)
{
	int split_point, pivot;
	pivot = x[first];//取第一个元素为pivot
	split_point = first;
	for (int unknown=first+1;unknown<=last;unknown++)
		if (x[unknown] < pivot)
		{
			split_point++;
			//交换x[split_point]和x[unknown]的值
			int t = x[split_point];
			x[split_point] = x[unknown];
			x[unknown] = t;
		}
	//交换x[first]和x[split_point]的值
	x[first] = x[split_point];
	x[split_point] = pivot;
	return split_point;
}