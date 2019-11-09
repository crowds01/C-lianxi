/*从键盘输入一个N×N的矩阵，把它转置后输出。
解：矩阵可用一个二维数组来表示。对矩阵进行转置就是交换二维数组中a[i][j]与a[j][i]的值。*/

#include <iostream>
using namespace std;

int main()
{
	const int N = 3;
	int a[N][N];
	int i, j;
	//输入矩阵数据
	cout << "请输入" << N << "×" << N << "矩阵：\n";
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			cin >> a[i][j];
	//转置矩阵：交换a[i][j]和a[j][i]的值
	for (i=0;i<N;i++)
		for (j = i + 1; j < N; j++)
		{
			//交换a[i][j]与a[j][i]的值
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	//输出转置后的矩阵
	cout << "转置后为：\n";
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}