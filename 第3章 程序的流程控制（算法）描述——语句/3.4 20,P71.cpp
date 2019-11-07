/*求级数1+x+x^2/2!+...+x^i/i!...前n项之和。*/

#include <iostream>
using namespace std;

int main()
{
	double x;
	int n;
	cout << "请输入x和n：";
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
//x^n和i!每次都是从头计算，计算量大且当x和n大时都可能超出int的范围


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double x;
//	int n;
//	cout << "请输入x和n：";
//	cin >> x >> n;
//	double sum = 1 + x,
//			item=x;//用于存储级数的项
//	for (int i = 2; i < n; i++)
//	{
//		item *= x / i;
//		sum += item;
//	}
//	cout << "x=" << x << ",n=" << n << ",sum=" << sum << endl;
//	return 0;
//}