/*编写一个函数，该函数根据调用者提供的成绩数据显示：优、良、中、及格以及不及格。*/

#include <iostream>
using namespace std;

void display_message(int score);

int main()
{
	int score;
	cout << "请输入成绩：";
	cin >> score;
	display_message(score);
	return 0;
}

void display_message(int score)
{
	if (score >= 90)
		cout << "优" << endl;
	else if (score >= 80)
		cout << "良" << endl;
	else if (score >= 70)
		cout << "中" << endl;
	else if (score >= 60)
		cout << "及格" << endl;
	else
		cout << "不及格" << endl;
	return;
}