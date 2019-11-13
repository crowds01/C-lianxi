/*����ʵ�־�����������Ͳ�ʵ�־�����������˲�����
�⣺�����ࣨMatrix����������(Vector)��ʵ�־�����������˲�����ȫ�ֺ�����multiply��*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Vector;
class Matrix //������
{
	int* p_data;//��ʾ��������
	int row, col;//��ʾ���������������
	friend void multiply(const Matrix& m, const Vector& v, Vector& r);
public:
	Matrix(int r, int c)
	{
		if (r <= 0 || c <= 0)
		{
			cerr << "����ߴ粻�Ϸ���\n";
			exit(-1);
		}
		row = r;
		col = c;
		p_data = new int[row * col];
	}
	~Matrix()
	{
		delete[]p_data;
	}
	int& element(int i, int j)//���ʾ���Ԫ��
	{
		if (i < 0 || i >= row || j < 0 || j >= col)
		{
			cerr << "�����±�Խ��\n";
			exit(-1);
		}
		return *(p_data + i * col + j);
	}
	int element(int i, int j) const//���ʾ���Ԫ�أ�Ϊ���������ṩ��
	{
		if (i < 0 || i >= row || j < 0 || j >= col)
		{
			cerr << "�����±�Խ��\n";
			exit(-1);
		}
		return *(p_data + i * col + j);
	}
	int dimension_row() const//��þ��������
	{
		return row;
	}
	int dimesion_column() const//��þ��������
	{
		return col;
	}
	void display() const//��ʾ����Ԫ��
	{
		int* p = p_data;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << *p << ' ';
				p++;
			}
			cout << endl;
		}
	}
};

class Vector //������
{
	int* p_data;
	int num;
	friend void multiply(const Matrix& m, const Vector& v, Vector& r);
public:
	Vector(int n)
	{
		if (n <= 0)
		{
			cerr << "�����ߴ粻�Ϸ���\n";
			exit(-1);
		}
		num = n;
		p_data = new int[num];
	}
	~Vector()
	{
		delete[]p_data;
	}
	int& element(int i)//��������Ԫ��
	{
		if (i < 0 || i >= num)
		{
			cerr << "�����±�Խ��\n";
			exit(-1);
		}
		return p_data[i];
	}
	int element(int i) const//��������Ԫ�أ�Ϊ���������ṩ��
	{
		if (i < 0 || i >= num)
		{
			cerr << "�����±�Խ��\n";
			exit(-1);
		}
		return p_data[i];
	}
	int dimension()const//���������ĳߴ�
	{
		return num;
	}
	void display()const//��ʾ����Ԫ��
	{
		int* p = p_data;
		for (int i = 0; i < num; i++, p++)
			cout << *p << ' ';
		cout << endl;
	}
};

void multiply(const Matrix& m, const Vector& v, Vector& r)
{
	if (m.col != v.num || m.dimension_row != r.num)
	{
		cerr << "����������ĳߴ粻ƥ�䣡\n";
		exit(-1);
	}
	int* p_m = m.p_data, * p_r = r.p_data, * p_v;
	for (int i = 0; i < m.row; i++)
	{
		*p_v = 0;
		p_v = v.p_data;
		for (int j = 0; j < m.col; j++)
		{
			*p_r += (*p_m) * (*p_v);
			p_m++;
			p_v++;
		}
		p_r++;
	}
}
