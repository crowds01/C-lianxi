/*������С��n��������������������*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, count = 0;//count���ڶ��ҵ����������м���
	cout << "������һ����������";
	cin >> n;//�Ӽ�������һ��������
	for (int i = 2; i < n; i++)
	{
		int j = 2;
		while (j < i && i % j != 0)
			j++;
		if (j == i)
		{
			cout << i << ",";
			count++;
			if (count % 6 == 0)
				cout << endl;
		}
	}
	cout << endl;
	return 0;
}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n, count = 1;
//	cin >> n;
//	if (n <= 2) return -1;//��ֹ�޵����
//	cout << 2 << ",";
//	for (int i = 3; i < n; i += 2)
//	{
//		int j = 2, k = sqrt((double)i);
//		while (j <= k && i % j != 0)
//			j++;
//		if (j > k)
//		{
//			cout << i << ",";
//			count++;
//			if (count % 6 == 0) cout << endl;
//		}
//	}
//	cout << endl;
//	return 0;
//}