/*����ض���*/

#include <iostream>
using namespace  std;

int main()
{
	int x, y;
	cin >> x >> y;
	freopen("test.txt", "w", stdout);//����׼����ض���test.txt�ļ�
	if (y == 0)//����Ϊ0������Ļ�����������Ϣ
		cerr << "error." << endl;
	else
		cout << x / y;//��������test.txt
	return 0;
}