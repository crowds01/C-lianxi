#include <iostream>
#include <string>//使用string须包含此“头文件”
using namespace std;

string weekdays[] = {//string是字符串类型。可存放字符串常量
	"Monday","Tuesday","Wendesday","Thursday","Friday","Saturday","Sunday"
};//字符串数组

int main()
{
	int n;
	cin >> n;
	if (n > 7 || n < 1)
		cout << "Illegal";
	else
		cout << weekdays[n - 1];
	return 0;
}