/*��дһ���������ú������ݵ������ṩ�ĳɼ�������ʾ���š������С������Լ�������*/

#include <iostream>
using namespace std;

void display_message(int score);

int main()
{
	int score;
	cout << "������ɼ���";
	cin >> score;
	display_message(score);
	return 0;
}

void display_message(int score)
{
	if (score >= 90)
		cout << "��" << endl;
	else if (score >= 80)
		cout << "��" << endl;
	else if (score >= 70)
		cout << "��" << endl;
	else if (score >= 60)
		cout << "����" << endl;
	else
		cout << "������" << endl;
	return;
}