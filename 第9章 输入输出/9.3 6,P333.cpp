/*��I/O������ʵ����9-1�ĳ����ܡ�*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_NUM_OF_COURSES = 30;
const int MAX_ID_LEN = 10;
const int MAX_NAME_LEN = 8;

class StudentScores
{
public:
	StudentScores() { initialized = false; }
	bool data_is_ok() const { return initialized; }
private:
	int scores[MAX_NUM_OF_COURSES], num_of_courses;
	char id[MAX_ID_LEN + 1], name[MAX_NAME_LEN + 1];
	bool initialized;//��ʾѧ���ɼ��Ƿ񱻳ɹ�����
	friend istream& operator >> (istream& in, StudentScores& x);
	friend ostream& operator << (ostream& out, const StudentScores& x);
};
istream& operator>>(istream& in, StudentScores& x)
{
	if (&in == &cin)//�Ӽ�������ʱ��Ҫ������ʾ
		cout << "������ѧ�š�������ѡ���������ſγɼ�����ѧ��'E'��������\n";
	in >> setw(11) >> x.id;//����ѧ��
	if (in.eof() || x.id[0] == 'E')//�жϽ������
	{
		x.initialized = false;
		return in;
	}
	in >> setw(9) >> x.name;//��������
	in >> x.num_of_courses;//����ѡ����
	if (x.num_of_courses > MAX_NUM_OF_COURSES)
	{
		x.initialized = false;
		return in;
	}
	for (int i = 0; i < x.num_of_courses; i++)
		in >> x.scores[i];
	x.initialized = true;
	return in;
}
ostream& operator<<(ostream& out, const StudentScores& x)
{
	out << x.id << ' ' //����ѧ��
		<< x.name << ' ' //�������
		<< x.num_of_courses;//����ѡ����
	for (int i = 0; i < x.num_of_courses; i++)//ѭ��������ſγɼ�
		out << ' ' << x.scores[i];
	return out;
}

int main()
{
	ofstream out_file("e:\\scores.txt", ios::out);//���ı���ʽ���ļ��������
	if (!out_file)//�ж��ļ����Ƿ�ɹ�
	{
		cerr << "���ļ�ʧ�ܣ�\n";
		return -1;
	}
	StudentScores st;
	cin >> st;//�ӱ�׼�����豸�����һ��ѧ����ѡ����Ϣ
	while (st.data_is_ok())//�ж������Ƿ����
	{
		out_file << st << endl;//���ļ���д��ѧ��ѡ����Ϣ
		cin >> st;//�ӱ�׼�����豸������һ��ѧ����ѡ����Ϣ
	}
	out_file.close();//�ر��ļ�
	return 0;
}