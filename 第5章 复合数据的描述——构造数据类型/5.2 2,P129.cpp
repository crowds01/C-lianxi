/*��һά����ʵ�����n��쳲�������Fibonacci������*/

#include <iostream>
using namespace std;

int main()
{
	const int MAX_N = 40;
	int fibs[MAX_N];
	int n, i;
	cout << "������n(1-" << MAX_N << "):";
	cin >> n;
	if (n > MAX_N)
	{
		cout << "n̫���ˣ�" << endl;
		return -1;
	}
	fibs[0] = fibs[1] = 1;
	for (i = 2; i < n; i++)
		fibs[i] = fibs[i - 1] + fibs[i - 2];
	
	cout << "��" << n << "��쳲��������ǣ�" << fibs[n - 1] << endl;
	return 0;
}