/*以文本方式读写文件
对in.txt中的数字进行排序，将排好序的结果输出到out.txt文件*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	ifstream srcFile("in.txt", ios::in);
	ofstream destFile("out.txt", ios::out);
	int x;
	while (srcFile >> x)
		v.push_back(x);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size; i++)
		destFile << v[i] << " ";
	destFile.close();
	srcFile.close();
	return 0;
}