/*����1+x+x^2/2!+...+x^i/i!...ǰn��֮�͡�*/

#include <iostream>
using namespace std;

int main()
{
	double x;
	int n;
	cout << "������x��n��";
	cin >> x >> n;
	double sum = 1 + x;
	for (int i = 2; i < n; i++)
	{
		int j, a = 1;
		double b = x;
		for (j = 2; j <= i; j++)
		{
			a *= j;//i!
			b *= x;//x^n
		}
		sum += b / a;
	}
	cout << "x=" << x << ",n=" << n << ",sum=" << sum << endl;
	return 0;
}
//x^n��i!ÿ�ζ��Ǵ�ͷ���㣬���������ҵ�x��n��ʱ�����ܳ���int�ķ�Χ


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double x;
//	int n;
//	cout << "������x��n��";
//	cin >> x >> n;
//	double sum = 1 + x,
//			item=x;//���ڴ洢��������
//	for (int i = 2; i < n; i++)
//	{
//		item *= x / i;
//		sum += item;
//	}
//	cout << "x=" << x << ",n=" << n << ",sum=" << sum << endl;
//	return 0;
//}