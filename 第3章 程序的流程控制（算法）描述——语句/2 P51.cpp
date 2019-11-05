/*【例3-2】计算级数a+2a+3a+...的前n项的和。
解：上面的级数前n项和可用等差数列求和公式。*/

#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	double a = 0, sum = 0;
	cout << "a=";
	cin >> a;
	cout << "n=";
	cin >> n;
	sum = a * (1 + n) * n / 2;
	cout << "sum=" << sum << endl;
	return 0;
}